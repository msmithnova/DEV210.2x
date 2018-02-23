#include "stdafx.h"
#include "Teacher.h"
#include <iostream>


Teacher::Teacher()
{
}

Teacher::Teacher(std::string firstName, std::string lastName, int age, std::string address, std::string city, std::string phone)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->age = age;
	this->address = address;
	this->city = city;
	this->phone = phone;
}


Teacher::~Teacher()
{
}

void Teacher::SetFirstName(std::string fName)
{
	this->firstName = fName;
}

std::string Teacher::GetFirstName()
{
	return this->firstName;
}

void Teacher::SetLastName(std::string lName)
{
	this->lastName = lName;
}

std::string Teacher::GetLastName()
{
	return this->lastName;
}

void Teacher::SetAge(int age)
{
	this->age = age;
}

int Teacher::GetAge()
{
	return age;
}

void Teacher::SetAddress(std::string addr)
{
	this->address = addr;
}

std::string Teacher::GetAddress()
{
	return this->address;
}

void Teacher::SetCity(std::string city)
{
	this->city = city;
}

std::string Teacher::GetCity()
{
	return this->city;
}

void Teacher::SetPhone(std::string phone)
{
	this->phone = phone;
}

std::string Teacher::GetPhone()
{
	return this->phone;
}

void Teacher::GradeStudent()
{
	std::cout << "Student graded" << std::endl;
}

void Teacher::SitInClass()
{
	std::cout << "Sitting at front of class" << std::endl;
}
