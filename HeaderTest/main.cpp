#include <iostream>
#ifndef HOUSE_H
#define HOUSE_H
#include "House.cpp"
#endif
#ifndef PERSON_H
#define PERSON_H
#include "Person.cpp"
#endif

int main()
{
	Person p1 = Person(30);
	p1.print();


	return 0;
}