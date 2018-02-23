#include "stdafx.h"
#include "Student.h"
#include <iostream>

Student::Student()
{
}

Student::Student(std::string firstName, std::string lastName, int age, std::string address, std::string city, std::string phone)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->age = age;
	this->address = address;
	this->city = city;
	this->phone = phone;
}


Student::~Student()
{
}

void Student::SetFirstName(std::string fName)
{
	this->firstName = fName;
}

std::string Student::GetFirstName()
{
	return this->firstName;
}

void Student::SetLastName(std::string lName)
{
	this->lastName = lName;
}

std::string Student::GetLastName()
{
	return this->lastName;
}

void Student::SetAge(int age)
{
	this->age = age;
}

int Student::GetAge()
{
	return this->age;
}

void Student::SetAddress(std::string addr)
{
	this->address = addr;
}

std::string Student::GetAddress()
{
	return this->address;
}

void Student::SetCity(std::string city)
{
	this->city = city;
}

std::string Student::GetCity()
{
	return this->city;
}

void Student::SetPhone(std::string phone)
{
	this->phone = phone;
}

std::string Student::GetPhone()
{
	return this->phone;
}

void Student::SitInClass()
{
	std::cout << "Sitting in main theatre" << std::endl;
}
