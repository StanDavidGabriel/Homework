#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student {
private:
	string name;
	int grade;

public:
	Student(string = "", int grade = 0);

	string getName() const;
	int getGrade() const;

	void setName(string name);
	void setGrade(int grade);

	void display() const;
};

#endif