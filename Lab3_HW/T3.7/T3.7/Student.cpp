#include "Student.h"

int Student::count = 0;

Student::Student(string name)
{
	this->name = name;
	count++;
	cout << "Created: " << name << " | Total: " << count << endl;
}

Student::~Student()
{
	count--;
	cout << "Destroyed: " << name << " | Total: " << count << endl;
}

int Student::getCount()
{
	return count;
}