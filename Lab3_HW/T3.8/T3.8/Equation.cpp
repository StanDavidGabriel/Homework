#include "Equation.h"

void Equation::setParameters(double a, double b, double c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

void Equation::solve()
{
	delta = b * b - 4 * a * c;
	if (delta < 0)
	{
		cout << "No real equation!\n";
	}
	else
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
	}
}

void Equation::display()const
{
	if (delta > 0)
	{
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}

}