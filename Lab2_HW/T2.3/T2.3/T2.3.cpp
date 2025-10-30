#include "Equation.h"

int main()
{
	double a, b;
	cout << "Enter a: "; cin >> a;
	cout << "Enter b: "; cin >> b;
	cout << "Solve eq: " << a << "x + " << b << " = 0" << endl;
	// ax+b=0 => ax=-b => x=-b/a => ecuatia este imposibila pentru a=0

	try
	{
		double x = solveEquation(a, b);
		cout << "Solution: x = " << x << endl;
	}
	catch (int e)
	{
		if (e == 1)
		{
			cout << "Equation is impossible." << endl;
		}
	}
	return 0;
}
