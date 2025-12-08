#include "Complex.h";

int main()
{
	Complex z1(3, 4);
	Complex z2(1, 2);

	Complex z3(0,0);
	z3 = z1.operator+(z2);
	z3.Print();

	int absVal = 0;
	absVal = ~(z1);
	cout << absVal << endl;

	Complex z4(0, 0);
	z4 = z1.operator^(2);
	z4.Print();
}