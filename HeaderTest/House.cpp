#include <iostream>
#ifndef PERSON_H
#define PERSON_H
#include "Person.cpp"
#endif

class House
{
    public:
    int length;
    Person p1;
    House(int l, Person p) : length(l), p1(p)
    {

    }
    void print()
    {
        std::cout << "It is house of length " << length << '\n';
    }
};