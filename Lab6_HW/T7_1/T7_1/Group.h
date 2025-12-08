#ifndef GROUP_H
#define GROUP_H

#include<iostream>
#include <string>
#include <vector>
using namespace std;

class Group {
public:

	class Student {
	private:
		string name;
		int age;
		float grade;

	public:
		Student(string name, int age, float grade);

		string getName();
		int getAge();
		float getGrade();

		void print();
	};

	Group(string groupName);

	void addStudent(const Student& s);
	void printGroup();

	Student getStudent(int index);

private:
	string groupName;
	vector<Student> students;
};


#endif
