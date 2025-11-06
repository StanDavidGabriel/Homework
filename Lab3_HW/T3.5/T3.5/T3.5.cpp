#include "Complex.h"

int main()
{
	ComplexNumber c1(2, 3), c2(1, 4);

	cout << "Your numbers: \n";
	c1.display(); c2.display();

	cout << "Sum: ";
	c1.add(c2).display();

	cout << "Prod: ";
	c1.multiply(c2).display();

}