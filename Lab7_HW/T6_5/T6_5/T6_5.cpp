#include "Polynomials.h"

int main()
{
	Polynomial p1({ 1, 2, 3 });
	Polynomial p2({ 10, 0, 3, 4 });

	Polynomial sum({0});

	p1.Print();
	p2.Print();

	sum = p1.operator+(p2);
	sum.Print();

}