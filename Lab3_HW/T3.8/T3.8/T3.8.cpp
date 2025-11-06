#include "Equation.h"

int main()
{
	Equation eq;
	eq.setParameters(1, -3, 2);
	eq.solve();
	eq.display();
}