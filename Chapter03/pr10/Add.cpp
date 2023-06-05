#include "Add.h"

Add::Add(int x, int y) { 
	
	num1 = x; num2 = y; 
}

void Add::setValue(int x, int y) { 
	
	num1 = x; num2 = y; 

}
int Add::calculate() { 
	
	return num1 + num2;
}