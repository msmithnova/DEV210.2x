// Mod3Samples.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
#include "Student.h"

int main()
{

	Student student1;

	// this line will generate a compiler error
	// student1.firstName = "Tom";

	// this line is ok
	student1.SayHello();


	return 0;
}