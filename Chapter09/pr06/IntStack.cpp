#include "IntStack.h"

IntStack::IntStack(int capacity) {

	this->cap = capacity;
	stackSize = 0;
	arr_p = new int[capacity];

}

bool IntStack::push(int n) {

	if (stackSize == this->cap) {
		
		return false;

	} else {
	
		arr_p[stackSize++] = n;
		
		return true;
	}
}

bool IntStack::pop(int& n) {
	
	if (stackSize <= 0) {

		return false;

	} else {
		
		n = arr_p[--stackSize];
		
		return true;
	}
}