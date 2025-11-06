#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	Student* next;
	static int count;

public:
	Student(string name);
	~Student();

	void setNext(Student* n);

	Student* getNext() const;
	string getName() const;

	static int getCount();

	void display() const;
};

#endif
