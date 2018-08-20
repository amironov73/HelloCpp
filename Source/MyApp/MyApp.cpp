#include <iostream>
#include "Person.h"

int main(int argc, char* argv[])
{
    Person *person = new Person("Alexey", 44);
    std::cout << person->to_string();

    return 0;
}
