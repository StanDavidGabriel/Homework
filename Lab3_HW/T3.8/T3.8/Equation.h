#ifndef EQUATION_H
#define EQUATION_H

#include <iostream>
#include <cmath>

using namespace std;

class Equation {
private:
	double a, b, c;
	double x1, x2;	
	double delta;

public:
	void setParameters(double a, double b, double c);
	void solve();
	void display()	const;
};

#endif
