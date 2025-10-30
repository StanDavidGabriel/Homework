#include "Area.h"

// coduri eroare:
// 1 = string gol
// 2 = format invalid
// 3 = latura negativa

double convertToDouble(string s)
{
	double val = 0;
	int point = 0;
	int ok = 1;	

	if (s.size() == 0)
	{
		throw 1; // sir gol
	}

	
	if (s[0] == '-')
	{
		throw 3; // latura negativa
	}

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			val = val * 10 + (s[i] - '0');
			if (point)
				point++;
		}
		else
			if (s[i] == '.' && point == 0)
			{
				point = 1;
			}
			else
			{
				ok = 0;
				break;
			}
	}

	if (!ok)
	{
		throw 2; // format invalid
	}
	if (point > 1)
	{
		for (int j = 0; j < point; j++)
		{
			val /= 10.0;
		}
	}
	
	return val;
}

double AreaGeneral(double a, double b)
{
	if (b == 0)
	{
		b = a; // patrat
	}
	return a * b;
}

double computeArea(double (*f)(double, double), string s1, string s2)
{
	double a, b;
	try
	{
		a = convertToDouble(s1);
		b = convertToDouble(s2);
	}
	catch (int e)
	{
		cout << "Exception code: " << e << " (invalid input)" << endl;
		throw;
	}

	return f(a, b);
}

