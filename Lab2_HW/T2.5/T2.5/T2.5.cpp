#include "Operate.h"

int main()
{
	int a, b;

	cout << "Enter two integers: "; cin >> a >> b;

	try
	{
		cout << "Integer addition: " << operate(a, b, addInt) << endl;
		cout << "Integer difference: " << operate(a, b, diffInt) << endl;
		cout << "Integer division: " << operate(a, b, divInt) << endl;

	}
	catch (...)
	{
		cout << "Integer operation failed!" << endl;
	}


	double x, y;

	cout << "\n\n\nEnter two doubles: "; cin >> x >> y;

	try
	{
		cout << "Double addition: " << operate(x, y, addDouble) << endl;
		cout << "Double difference: " << operate(x, y, diffDouble) << endl;
		cout << "Double division: " << operate(x, y, divDouble) << endl;

	}
	catch (...)
	{
		cout << "Integer operation failed!" << endl;
		
	}
}