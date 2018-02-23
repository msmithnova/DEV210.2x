#include "stdafx.h"
#include "Course.h"


Course::Course()
{
}

Course::Course(std::string name, Student * students, Teacher teacher)
{
	this->students = students;
	this->teacher = teacher;
}

Course::~Course()
{
}

void Course::SetName(std::string name)
{
	this->name = name;
}

std::string Course::GetName()
{
	return this->name;
}

void Course::SetStudents(Student * students)
{
	this->students = students;
}

Student * Course::GetStudents()
{
	return this->students;
}

void Course::SetTeacher(Teacher teacher)
{
	this->teacher = teacher;
}

Teacher Course::GetTeacher()
{
	return this->teacher;
}
