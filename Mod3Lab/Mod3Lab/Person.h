#pragma once

#include <string>

class Person
{
private:
	int age;

protected:
	std::string phone;

public:
	std::string first_name;
	std::string last_name;

	Person();
	Person(int age);
	virtual ~Person();

	virtual void OutputIdentity() = 0;
	virtual void OutputAge();
};

