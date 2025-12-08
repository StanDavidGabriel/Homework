#include "Polynomials.h"

Polynomial::Polynomial(vector<int> coef)
{
	this->coef = coef;
}

Polynomial Polynomial::operator+(const Polynomial& p)
{
	int maxSize = max(this->coef.size(), p.coef.size());
	vector<int>result(maxSize, 0);

	for (int i = 0; i < maxSize; i++)
	{
		if (i < this->coef.size())
		{
			result[i] += this->coef[i];
		}
		
		if (i < p.coef.size())
		{
			result[i] += p.coef[i];
		}
	}

	return Polynomial(result);
}

void Polynomial::Print()
{
	int sizeCoef = this->coef.size();

	for (int i = 0; i < sizeCoef - 1; i++)
	{
		if (this->coef[i] != 0)
		{
			cout << this->coef[i] << "x^" << i << " + ";
		}
	}
	if (this->coef[sizeCoef - 1] != 0)
	{
		cout << this->coef[sizeCoef - 1] << "x^" << sizeCoef - 1;
	}
	cout << endl << endl << endl;
}