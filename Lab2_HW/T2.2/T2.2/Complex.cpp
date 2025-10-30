#include "Complex.h"

double absValue(float a)
{
	return fabs(a); // fabs functioneaza la fel ca abs, doar ca este pentru variabile de tip float
}
double absValue(nrComplex z)
{
	return sqrt(z.a * z.a + z.b * z.b);
}