#include "Stack.h"

bool Stack::operator! () { return index == 0 ? true : false; }

Stack& Stack::operator <<(int num) {
	
	stack[++index] = num ;
	return *this;
}

Stack& Stack::operator >>(int& num) {

	num = stack[index--];
	return *this;
}
