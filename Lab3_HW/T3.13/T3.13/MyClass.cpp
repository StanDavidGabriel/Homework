#include "MyClass.h"

int MyClass::counter = 0;

MyClass::MyClass() {
	counter++;
	checkLimit();
}

void MyClass::checkLimit() {
	if (counter > 3)
	{
		cout << "WARNING!!! More than 3 instances created!!!" << endl;
	}
}

int MyClass::getCounter()
{
	return counter;
}