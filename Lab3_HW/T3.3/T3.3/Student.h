#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	string name;
	int grade;

public:
	Student(string name = "", int grade = 0);
	string getName() const;
	int getGrade() const;
	void setName(string name);
	void setGrade(int grade);
	void display() const;
};


#endif