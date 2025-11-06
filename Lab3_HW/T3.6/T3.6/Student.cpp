#include "Student.h"

Student::Student(int g)
{
	grade = g;
}

Student::Student() : Student(8) {}

int Student::getGrade() const
{
	return grade;
}

