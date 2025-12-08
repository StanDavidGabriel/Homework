#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Complex {
private:
	double real;
	double imag;

public:
	Complex(double real, double imag);


	double operator~();

	bool operator<(Complex& c);
};
