#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student {
private:
	int grade;
	Student(int g); 

public:
	Student();
	int getGrade() const;
};


#endif
