#pragma once

#include "Person.h"

class Teacher :
	public Person
{
public:
	Teacher();
	Teacher(std::string firstName, std::string lastName, int age, std::string phone);
	virtual ~Teacher();

	void OutputIdentity();
	void OutputAge();
};

