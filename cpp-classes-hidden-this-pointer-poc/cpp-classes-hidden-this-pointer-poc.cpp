#include <iostream>
#include "Person.h"

using namespace std;

// Pointers of type METHOD_PTR can point to any method with following signature: 
// void Person::methodName(string)
typedef void(Person::* METHOD_PTR)(std::string);

// Pointers of type FUNCTION_PTR can point to any function with following signature:
// void funcName(void*, void*, string)
// Explanation of the __fastcall trick
// https://tresp4sser.wordpress.com/2012/10/06/how-to-hook-thiscall-functions/
typedef void(__fastcall* FUNCTION_PTR)(void* pThis, void* notUsed, string);

// Gets method's address via template and reinterpret_cast trick
// https://stackoverflow.com/a/52427102
template<typename M> inline void* GetMethodPointer(M methodPtr)
{
    return *reinterpret_cast<void**>(&methodPtr);
}

void showNames(Person& person1, Person& person2)
{
    cout << "p1.name: " << person1.getName() << endl;
    cout << "p2.name: " << person2.getName() << endl;
}

int main()
{
    void* setNameMethodPtr = GetMethodPointer<METHOD_PTR>(&Person::setName);
    FUNCTION_PTR setNameFunctionPtr = (FUNCTION_PTR)setNameMethodPtr;

    Person p1, p2;

    // Should display "Unnamed person"
    showNames(p1, p2);

    // Call setName method via the setNameFunctionPtr pointer
    // The first parameter must the the address of a conrete instance
    // It will become the 'this' pointer
    setNameFunctionPtr(&p1, nullptr, "Person 1");
    setNameFunctionPtr(&p2, nullptr, "Person 2");

    // Should display "Person 1 and Person 2"
    showNames(p1, p2);
}
