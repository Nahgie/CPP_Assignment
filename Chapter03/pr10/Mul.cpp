#include "Mul.h"

Mul::Mul(int x, int y) { 
	
	num1 = x; num2 = y; 
}

void Mul::setValue(int x, int y) { 
	
	num1 = x; num2 = y; 
}

int Mul::calculate() { 
	
	return num1 * num2; 
}