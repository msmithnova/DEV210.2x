#include "stdafx.h"
#include "Student.h"
#include <iostream>

Student::Student()
{
}

Student::~Student()
{
}

void Student::setAge(int age)
{
	if (age < 5)
	{
		std::cout << "Student age needs to at least 5 years old." << std::endl;
	}
	else
	{
		this->age = age;
	}
}

int Student::getAge()
{
	return this->age;
}

void Student::SayHello()
{
	std::cout << "Hey, how's it goin'?" << std::endl;
}