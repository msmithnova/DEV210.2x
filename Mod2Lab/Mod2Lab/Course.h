#pragma once

#include "Student.h"
#include "Teacher.h"

class Course
{
private:
	std::string name;
	Student *students;
	Teacher teacher;

public:
	Course();
	Course(std::string name, Student * students, Teacher teacher);

	~Course();

	void SetName(std::string name);
	std::string GetName();

	void SetStudents(Student * students);
	Student * GetStudents();

	void SetTeacher(Teacher teacher);
	Teacher GetTeacher();
};

