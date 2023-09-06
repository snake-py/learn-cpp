#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person
{

public:
    Person(const std::string &name, int age);
    void print_info() const
    {
        std::cout << "Name: " << name << ", Age: " << age << std::endl;
    }

private:
    std::string name;
    int age;

public:
    static int person_count;
};

#endif // PERSON_H