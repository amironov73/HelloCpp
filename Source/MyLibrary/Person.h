#pragma once
#include <string>

class Person
{
private:
    std::string _name;
    int _age;

public:
    Person(std:: string name, int age);

    std::string get_Name() const { return _name; }
    int get_Age() const { return _age; }

    std::string to_string() const;
};

