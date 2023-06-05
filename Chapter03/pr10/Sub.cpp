#include "Sub.h"

Sub::Sub(int x, int y) { 
	
	num1 = x; num2 = y; 
}

void Sub::setValue(int x, int y) { 
	
	num1 = x; num2 = y; 
}

int Sub::calculate() { 
	
	return num1 - num2; 
}