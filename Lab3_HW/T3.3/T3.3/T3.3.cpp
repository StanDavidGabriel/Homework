#include "Student.h"
#include <algorithm>
#include <vector>

int main()
{
	vector<Student> students =
	{
		{"Ana", 9}, {"Mihai", 7}, {"David", 10}
	};
	
	string searchName;
	cout << "Enter a name to search: "; cin >> searchName;

	auto it = find_if(students.begin(), students.end(),
		[searchName](const Student& s) { return s.getName() == searchName; });
	if (it != students.end())
	{
		cout << "Found student: "; it->display();
	}
	else
	{
		cout << "Student not found!\n";
	}
	return 0;
}