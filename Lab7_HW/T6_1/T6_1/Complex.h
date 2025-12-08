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

	Complex operator+(const Complex& c);

	double operator~();

	Complex operator^(int power);

	void Print();
};
