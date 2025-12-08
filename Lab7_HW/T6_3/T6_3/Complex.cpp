#include "Complex.h"

Complex::Complex(double real, double imag)
{
	this->real = real;
	this->imag = imag;
}

// z=a+ib => |z|=sqrt(a^2 + b^2)
double Complex::operator~()
{
	int absVal;
	absVal = sqrt(this->real * this->real + this->imag * this->imag);

	return absVal;
}

bool Complex::operator<(Complex& c)
{
	return (~(*this) < (~c));
}
