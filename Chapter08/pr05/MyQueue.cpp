#include "MyQueue.h"

int MyQueue::index = 0, MyQueue::cap = 0;

void MyQueue::enqueue(int num) {

	this->put(this->index, num);
	this->index++;
}

int MyQueue::dequeue() {

	this->index--;
	static int read = 0;
	
	return this->get(read++);
}