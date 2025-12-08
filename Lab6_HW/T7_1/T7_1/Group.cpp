#include "Group.h"

Group::Student::Student(string name, int age, float grade)
{
	this->name = name;
	this->age = age;
	this->grade = grade;
}

string Group::Student::getName()
{
	return this->name;
}

int Group::Student::getAge()
{
	return this->age;
}

float Group::Student::getGrade()
{
	return this->grade;
}

void Group::Student::print()
{
	cout << "Student: " << name << ", Age: " << age << ", Grade: " << grade;
}




Group::Group(string groupName)
{
	this->groupName = groupName;
}

void Group::addStudent(const Student& s)
{
	students.push_back(s);
}

void Group::printGroup()
{
	cout << "Group: " << groupName << endl;
	cout << "Students: " << endl;

	for (int i = 0; i < students.size(); i++)
	{
		students[i].print();
		cout << endl;
	}
	cout << "=========\n\n\n";
	
}

Group::Student Group::getStudent(int index)
{
	return students[index];
}