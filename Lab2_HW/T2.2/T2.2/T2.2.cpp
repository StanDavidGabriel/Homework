#include "Complex.h"

int main()
{
	float realNR;
	nrComplex z;

	cout << "Introduceti un numar real: "; cin >> realNR;
	cout << "Modulul numarului real este: " << absValue(realNR) << endl;

	cout << endl << "Introduceti partea reala a numarului complex: "; cin >> z.a;
	cout << "Introduceti partea imaginara a numarului complex: "; cin >> z.b;

	cout << "Modulul numarului complex este: " << absValue(z) << endl;

	return 0;
}