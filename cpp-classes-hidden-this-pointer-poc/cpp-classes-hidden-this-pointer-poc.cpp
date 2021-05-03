#include <iostream>
#include "Person.h"

using namespace std;

// Pointrs of type METHOD_PTR can point to any method with following signature: 
// double Person::methodName(string)
typedef double(Person::* METHOD_PTR)(string);

int main()
{
    
}
