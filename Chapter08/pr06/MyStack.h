#pragma once
#include "BaseArray.h"

class MyStack : private BaseArray {
private:

	static int index, cap;

public:

	MyStack(int cap) :BaseArray(cap) { this->cap = cap; }

	int capacity() { return this->cap; }
	int length() { return this->index; }
	void push(int num);
	int pop();

};