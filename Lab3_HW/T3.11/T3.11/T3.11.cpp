#include "Helper.h"

int main()
{

	cout << "Sum: " << Helper::getInstance().sum(1, 2) << endl;
	cout << "Diff: " << Helper::getInstance().diff(10, 4) << endl;
}