#pragma once
#include <string>
#include <iostream>

class Person
{
public:
    Person()
    {
        name = std::string("Unnamed person @ address ") + std::to_string(size_t(this));
    }

    void setName(std::string name)
    {
        std::cout << "Setting name '" + name + "' for instance " + std::to_string(size_t(this)) << std::endl;
        this->name = name;
    }

    std::string getName()
    {
        std::cout << "Getting name for instance " + std::to_string(size_t(this)) << std::endl;
        return this->name;
    }

private:
    std::string name;
};
