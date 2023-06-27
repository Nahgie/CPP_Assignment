#pragma once
#include "AbstractStack.h"

class IntStack : private AbstractStack {
	
	int cap , stackSize;
	int* arr_p;

public :

	IntStack(int capacity);
	~IntStack() { delete[] arr_p; }
	
	bool push(int n);
	bool pop(int& n);

	int size() { return this->stackSize; }
};