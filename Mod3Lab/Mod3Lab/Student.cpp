#include "stdafx.h"
#include "Student.h"
#include <iostream>


Student::Student()
{
}


Student::Student(std::string firstName, std::string lastName, int age, std::string phone) : Person(age)
{
	this->first_name = firstName;
	this->last_name = lastName;
	this->phone = phone;
}


Student::~Student()
{
}

void Student::OutputIdentity()
{
	std::cout << "I am a student" << std::endl;
}

void Student::OutputAge()
{
	OutputIdentity();
	Person::OutputAge();
}
