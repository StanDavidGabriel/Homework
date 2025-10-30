#include "Operate.h"

int addInt(int a, int b) {
	return a + b;
}

int diffInt(int a, int b) {
	return a - b;
}
int divInt(int a, int b) {
	if (b == 0)
	{
		throw 1; // impartire la zero
	}
	return a / b;
}

double addDouble(double a, double b) {
	return a + b;
}
double diffDouble(double a, double b) {
	return a - b;
}
double divDouble(double a, double b) {
	if (b == 0)
	{
		throw 1; // impartire la zero
	}
	double x = a / b;
	return x;
}


int operate(int a, int b, int (*f)(int, int)) 
{
	int result;
	try
	{
		result = f(a, b);

	}
	catch (...)
	{
		cout << "Error: division by zero!" << endl;
		throw;
	}
	return result;
}

double operate(double a, double b, double (*f)(double, double))
{
	double result;
	try
	{
		result = f(a, b);

	}
	catch (...)
	{
		cout << "Error: division by zero!" << endl;
		throw;
	}
	return result;
}