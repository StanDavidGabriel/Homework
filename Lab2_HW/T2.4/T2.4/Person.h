#ifndef Person_H
#define Person_H

#include <iostream>
#include <string>

using namespace std;

struct Person
{
	string name;
	int age;
};

void SortByName(Person p[], int n);
void SortByAge(Person p[], int n);
void PrintPersons(Person p[], int n);



#endif

