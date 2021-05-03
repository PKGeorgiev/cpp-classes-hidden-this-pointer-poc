#pragma once
#include <string>

class Person
{
public:
    void setName(std::string name)
    {
        this->name = name;
    }

    std::string getName()
    {
        return this->name;
    }

private:
    std::string name;
};
