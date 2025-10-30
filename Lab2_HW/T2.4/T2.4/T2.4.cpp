#include "Person.h"

int main()
{
	int n;
	cout << "Enter number of persons: "; cin >> n;

	Person p[10001];
	try
	{
		for (int i = 0; i < n; i++)
		{
			cout << "Enter name for person " << i + 1 << ": "; cin >> p[i].name;
			cout << "Enter age for person " << i + 1 << ": "; cin >> p[i].age;



			if (p[i].age < 0)
			{
				throw 1;
			}
		}

		cout << "Initial list:\n";
		PrintPersons(p, n);

		cout << "\nSorted by age (descending):\n";
		SortByAge(p, n);
		PrintPersons(p, n);

		cout << "\nSorted by name (ascending):\n";
		SortByName(p, n);
		PrintPersons(p, n);
	}
	catch(int e)
	{
		if (e == 1)
		{
			cout << "Error: Age cannot be negative!";
		}

	}
	return 0;

}