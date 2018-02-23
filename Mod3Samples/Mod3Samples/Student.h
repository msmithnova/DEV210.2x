#pragma once
#include "Person.h"

class Student :
	public Person
{
public:
	Student();
	~Student();

	void setAge(int);
	int getAge();
	void SayHello();
};