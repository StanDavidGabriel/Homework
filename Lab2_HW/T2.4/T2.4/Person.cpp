#include "Person.h"

void SortByName(Person p[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (p[i].name > p[j].name) 
			{
				Person aux = p[i];
				p[i] = p[j];
				p[j] = aux;
			}
		}
	}
}


void SortByAge(Person p[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (p[i].age < p[j].age)
			{
				Person aux = p[i];
				p[i] = p[j];
				p[j] = aux;
			}
		}
	}
}

void PrintPersons(Person p[], int n)
{
	cout << "=================================================\n";
	for (int i = 0; i < n; i++)
	{
		cout << "Name: " << p[i].name << "; Age: " << p[i].age << endl;
	}
	cout << "=================================================\n";

}