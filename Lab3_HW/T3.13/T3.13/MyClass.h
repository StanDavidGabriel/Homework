#ifndef MYCLASS_H
#define MYCLASS_H

#include <iostream>
using namespace std;

class MyClass {
private:
	static int counter;
	void checkLimit();

public:
	MyClass();
	static int getCounter();
};

#endif
