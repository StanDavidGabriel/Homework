#ifndef Complex_H
#define Complex_H

#include <iostream>
#include <cmath>

using namespace std;

struct nrComplex
{
	double a; // partea reala
	double b; // partea imaginara
};

double absValue(float a);
double absValue(nrComplex z);


#endif 