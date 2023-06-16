#include "MyIntStack.h"

MyIntStack::MyIntStack() {
	
	this->p[9] = {0,};
	this->tos = 0;

}

bool MyIntStack::push(int n) {

	if (n > 9) { return false; } 
	
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