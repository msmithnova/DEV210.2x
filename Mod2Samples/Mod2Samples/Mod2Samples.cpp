// Mod2Samples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Math.h"
#include <iostream>
#include "Person.h"

using namespace std;

int main()
{
	int result = Math::pow(2, 10);
	cout << result << endl;
	
	// create a Person instance using default constructor
	Person *pOne = new Person();

	// Create a Person instance using 2 argument constructor
	Person *pTwo = new Person("Tom", "Thumb");

	// Create a Person instance using 3 argument constructor
	Person *pThree = new Person("Tom", "Thumb", 15);

	Person p;
	Person &pRef = p;
	p.SayHello();
	// pointer method of calling a member function
	pOne->SayHello();
	// reference method of calling a member function
	pRef.SayHello();

	p.SetFirstName("Gerry");
	std::cout << p.GetFirstName() << std::endl;

	// this line will output an invalid age message due to the 
	// validation check in the SetAge() function
	p.SetAge(-5);

	// this line will not work because firstName is private
	// p.firstName = "Gerry";

	delete pOne, pTwo, pThree;

	return 0;
}

