#include "Complex.h"

ComplexNumber::ComplexNumber(double real, double img)
{
	this->real = real;
	this->img = img;
}

ComplexNumber ComplexNumber::add(const ComplexNumber& other) const
{
	return ComplexNumber(real + other.real, img + other.img);
}

ComplexNumber ComplexNumber::multiply(const ComplexNumber& other)const
{
	double r = real * other.real - img * other.img;
	double i = real * other.img + img * other.real;

	return ComplexNumber(r, i);
}

void ComplexNumber::display()const
{
	cout << real << " + " << img<<"i" << endl;
}