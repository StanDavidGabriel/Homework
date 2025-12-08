#include "Complex.h";

int main()
{
	Complex z1(3, 4); // |z1|=5
	Complex z2(1, 2); // |z2|=2.23

	if (z1.operator<(z2))
	{
		cout << "z1<z2" << endl;
	}
	else
	{
		cout << "z1>=z2" << endl;
	}
}