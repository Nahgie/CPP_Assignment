#pragma once
#include "BaseArray.h"

class MyQueue : private BaseArray {
private :

	static int index, cap;

public :

	MyQueue(int cap) :BaseArray(cap) { this->cap = cap; }

	int capacity() { return this->cap; }
	int length() { return this->index; }
	void enqueue(int num);
	int dequeue();

};