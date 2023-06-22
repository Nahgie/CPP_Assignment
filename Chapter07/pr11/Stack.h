#pragma once
#include <iostream>
class Stack {
private :
	int stack[10], index = 0;
public :
	bool operator!();
	Stack& operator <<(int num);
	Stack& operator >> (int &num);
};