#include "Equation.h"

double solveEquation(double a, double b) {
	if (a == 0) {
		throw 1; // ecuatie imposibila
	}
	double x = -b / a;
	return x;
}