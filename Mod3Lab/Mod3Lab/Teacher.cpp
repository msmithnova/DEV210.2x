#include "stdafx.h"
#include "Teacher.h"
#include <iostream>

Teacher::Teacher()
{
}


Teacher::Teacher(std::string firstName, std::string lastName, int age, std::string phone) : Person(age)
{
	this->first_name = firstName;
	this->last_name = lastName;
	this->phone = phone;
}


Teacher::~Teacher()
{
}

void Teacher::OutputIdentity()
{
	std::cout << "I am a teacher" << std::endl;
}

void Teacher::OutputAge()
{
	OutputIdentity();
	Person::OutputAge();
}
