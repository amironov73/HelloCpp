#include "Person.h"


Person::Person(std::string name, int age)
{
    _name = name;
    _age = age;
}

std::string Person::to_string() const
{
    return "Name=" + _name + "; Age=" + std::to_string(_age);
}
