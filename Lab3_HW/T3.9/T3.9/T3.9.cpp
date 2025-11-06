#include "Student.h"

int main()
{
	Student* head=nullptr;
	Student* tail = nullptr;

	int n;
	cout << "Number of students: "; cin >> n;

	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		Student* newNode = new Student(s);

		if (head == nullptr)
		{
			head = tail = newNode;
		}
		else
		{
			tail->setNext(newNode);
			tail = newNode;
		}
	}

	cout << "\nStudents list (from 1st): \n";
	if (head) 
	{
		head->display();
	}

	cout << "\nNumber of students: " << Student::getCount() << endl;

	Student* start = head;
	int startIndex;
	cout << "Enter the number of the starting student: "; cin >> startIndex;

	if (startIndex <= n)
	{
		for (int i = 1; i < startIndex && start != nullptr; i++)
		{
			start = start->getNext();
		}

		cout << "\nStudents list from student " << startIndex << endl;
		start->display();
	}
	else
	{
		cout << "Your number is too big!\n";
	}
	
	Student* current = head;
	while (current) 
	{
		Student* aux = current;
		current = current->getNext();
		delete aux;
	}

	cout << "Number of students after delete: " << Student::getCount() << endl;
}