#include <vector>
#include <algorithm>
#include "Student.h"

int main()
{
	vector<Student> students =
	{
		{"Ana", 9}, {"David", 10}, {"Daria", 7}, {"Darius", 10}, {"Ioana", 10}
	};

	Student newStudent;
	newStudent.setGrade(10);
	newStudent.setName("Bianca");
	students.push_back(newStudent);

	int maxGrade= max_element(students.begin(), students.end(),
		[](const Student& a, Student& b) {
			return a.getGrade() < b.getGrade();
		})->getGrade();

	cout << "Highest grade: " << maxGrade << endl;
	cout << "Students with highest grade: \n";

	for (auto& s : students)
	{
		if (s.getGrade() == maxGrade)
		{
			s.display();
		}
	}

	return 0;
}