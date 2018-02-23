#include "stdafx.h"
#include "Person.h"
#include <iostream>

Person::Person()
{
}

Person::Person(int age)
{
	this->age = age;
}


Person::~Person()
{
}

void Person::OutputAge()
{
	std::cout << "I am " << age << " years old" << std::endl;
}
