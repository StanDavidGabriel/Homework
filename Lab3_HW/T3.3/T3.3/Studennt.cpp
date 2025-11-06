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

void Student::setName(string name)
{
	this->name = name;
}

void Student::setGrade(int grade)
{
	this->grade = grade;
}

void Student::display() const
{
	cout << name << " - " << grade << endl;
}


