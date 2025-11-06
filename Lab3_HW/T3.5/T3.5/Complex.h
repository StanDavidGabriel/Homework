#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

class ComplexNumber {
private:
	double real, img;

public:
	ComplexNumber(double real = 0, double img = 0);
	ComplexNumber add(const ComplexNumber& other) const;
	ComplexNumber multiply(const ComplexNumber& other) const;
	void display() const;
};


#endif
