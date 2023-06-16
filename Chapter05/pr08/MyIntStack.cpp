#include "MyIntStack.h"

MyIntStack::MyIntStack() : MyIntStack(1) {}

MyIntStack::MyIntStack(int size) {
	
	this->size = size;
	this->p = new int [size];
	this->tos = 0;
}

MyIntStack::MyIntStack(const MyIntStack& s) {

	this->size = s.size;
	this->tos = s.tos;
	p = new int[s.size];

	for (int i = 0; i < this->size; i++) {
	
		this->p[i] = s.p[i];
	
	}
}

MyIntStack::~MyIntStack() {
	delete[] p;
}

bool MyIntStack::push(int n) {

	if (tos > size) { return false; } 
	
	else {

		this->p[tos++] = n;
	
		return true;
	}
}

bool MyIntStack::pop(int& n) {
	
	tos--;

	if (tos < 0) { return false; } 
	
	else {
		
		n = this->p[tos];

		return true;
	}
}