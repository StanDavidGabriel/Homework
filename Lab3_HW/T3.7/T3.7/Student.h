#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
	string name;
	static int count;
	
public:
	Student(string name = "");
	~Student();
	static int getCount();
};


#endif
