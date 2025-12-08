#include "Complex.h"

Complex::Complex(double real, double imag)
{
	this->real = real;
	this->imag = imag;
}

Complex Complex::operator+(const Complex& c)
{
	Complex sum(0,0);
	sum.real = this->real + c.real;
	sum.imag = this->imag + c.imag;

	return sum;
}

// z=a+ib => |z|=sqrt(a^2 + b^2)
double Complex::operator~()
{
	int absVal;
	absVal =sqrt(this->real * this->real + this->imag * this->imag);
	
	return absVal;
}

//z=a+ib => z^2=(a^2-b^2)+2abi
Complex Complex::operator^(int power)
{
	if (power == 2)
	{
		Complex z(0,0);
		z.real = (this->real * this->real - this->imag * this->imag);
		z.imag = 2 * this->real * this->imag;
		
		return z;
	}

	return *this;
}

void Complex::Print()
{
	if (this->imag == 0)
	{
		cout << this->real << endl;
	}
	else
	{
		cout << this->real << "+i*" << this->imag << endl;
	}
}