#include "Div.h"

Div::Div(int x, int y) { 
	
	num1 = x; num2 = y; 
}

void Div::setValue(int x, int y) { 
	
	num1 = x; num2 = y; 
}

int Div::calculate() { 
	
	return num1 / num2; 
}