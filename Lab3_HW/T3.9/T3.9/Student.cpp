#include "Student.h"

int Student::count = 0;


Student::Student(string name)
{
	this->name = name;
	next = nullptr;
	count++;
}

Student::~Student()
{
	count--;
}

void Student::setNext(Student* n)
{
	next = n;
}

Student* Student::getNext() const
{
	return next;
}

string Student::getName() const
{
	return name;
}

int Student::getCount()
{
	return count;
}

void Student::display() const
{
	const Student* current = this;
	while (current)
	{
		cout << current->getName() << endl;
		current = current->getNext();
	}
}

