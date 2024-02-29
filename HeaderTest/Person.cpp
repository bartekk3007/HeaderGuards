#include <iostream>

class Person
{
public:
	int age;
	Person(int age) : age(age)
	{

	}
	void print()
	{
		std::cout << "I have age of " << age << '\n';
	}
};