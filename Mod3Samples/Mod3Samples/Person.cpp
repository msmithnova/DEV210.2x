#include "stdafx.h"
#include "Person.h"
#include <iostream>


Person::Person()
{

}

Person::Person(std::string fName, std::string lName)
{
	firstName = fName;
	lastName = lName;
}

Person::Person(std::string fName, std::string lName, int age)
{
	firstName = fName;
	lastName = lName;

	age = age;
}


Person::~Person()
{
	std::cout << "Destructor called as a result of the delete keyword being used" << std::endl;
}

void Person::SetFirstName(std::string fName)
{
	this->firstName = fName;
}

std::string Person::GetFirstName()
{
	return this->firstName;
}

void Person::SetLastName(std::string lName)
{
	this->lastName = lName;
}

std::string Person::GetLastName()
{
	return this->lastName;
}


void Person::SayHello()
{
	std::cout << "Hello" << std::endl;
}