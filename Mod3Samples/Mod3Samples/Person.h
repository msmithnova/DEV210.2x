#pragma once

#include <string>

class Person
{

private:
	std::string firstName;
	std::string lastName;

protected:
	int age;

public:
	Person();

	Person(std::string fName, std::string lName);

	Person(std::string fName, std::string lName, int age);

	~Person();

	void SetFirstName(std::string fName);
	std::string GetFirstName();

	void SetLastName(std::string lName);
	std::string GetLastName();

	void SayHello();
};