#include "MyStack.h"

int MyStack::index = 0, MyStack::cap = 0;

void MyStack::push(int num) {

	this->put(this->index, num);
	this->index++;

}

int MyStack::pop() {

	this->index--;
	return this->get(index);

}