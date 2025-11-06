#include "Student.h"

int main()
{
	Student s1("Ana"), s2("Mihai");
	{
		Student s3("Darius");
	}

	cout << "Current instances: " << Student::getCount() << endl;
}