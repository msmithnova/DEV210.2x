#pragma once

#include <string>

class Student
{
private:
	std::string firstName;
	std::string lastName;
	int age;
	std::string address;
	std::string city;
	std::string phone;

public:
	Student();
	Student(std::string firstName, std::string lastName, int age, std::string address, std::string city, std::string phone);
	~Student();

	void SetFirstName(std::string fName);
	std::string GetFirstName();

	void SetLastName(std::string lName);
	std::string GetLastName();

	void SetAge(int age);
	int GetAge();

	void SetAddress(std::string addr);
	std::string GetAddress();

	void SetCity(std::string city);
	std::string GetCity();

	void SetPhone(std::string phone);
	std::string GetPhone();

	void SitInClass();
};

