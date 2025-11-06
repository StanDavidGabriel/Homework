#include "Student.h"
#include <algorithm>
#include <vector>

int main()
{
	vector<Student> students =
	{
		{"Ana", 9}, {"David", 10}, {"Darius", 10}, {"Mihai", 8}, {"Diana", 6}
	};

	Student newStudent;
	newStudent.setName("Stefan");
	newStudent.setGrade(7);
	students.push_back(newStudent);

	cout << "Student list:\n";
	for (auto& s : students)
		s.display();

	sort(students.begin(), students.end(), [](const Student& a, const Student& b)
		{
			if (a.getGrade() == b.getGrade())
				return a.getName() < b.getName();
			return a.getGrade() > b.getGrade();
		});

	cout << "\nStudent list (sorted):\n";
	for (auto& s : students)
		s.display();	
}