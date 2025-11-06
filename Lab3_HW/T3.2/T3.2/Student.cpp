#include "Student.h"

Student::Student(string name, int grade)
{
	this->name = name;
	this->grade = grade;
}

string Student::getName() const
{
	return name;
}

int Student::getGrade() const
{
	return grade;
}


void Student::setName(string s)
{
	this->name = s;
}

void Student::setGrade(int g)
{
	this->grade = g;
}

void Student::display() const
{
	cout << name << " - Grade: " << grade << endl;
}
