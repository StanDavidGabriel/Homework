#include "Area.h"

int main()
{
	string a, b;
	cout << "Enter first side: "; cin >> a;
	cout << "Enter second side (or 0 for square): "; cin >> b;

	double area = 0;

	try
	{
		area = computeArea(AreaGeneral, a, b);
		cout << "Area = " << area << endl;
	}
	catch (int e)
	{
		if (e == 1)
		{
			cout << "Error: string gol!" << endl;
		}
		else
			if (e == 2)
			{
				cout << "Error: format invalid (trebuie sa fie un numar real)!" << endl;
			}
			else
				if (e == 3)
				{
					cout << "Error: numar negativ (trebuie sa fie un numar pozitiv)!" << endl;
				}
	}

	return 0;
}