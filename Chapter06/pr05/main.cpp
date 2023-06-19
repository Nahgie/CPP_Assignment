#include <iostream>
#include "ArrayUtility.h"

int main() {
	
	int x[] = { 1,2,3,4,5 };
	double y[5];
	double z[] = { 9.9,8.8,7.7,6.6,5.6 };

	ArrayUtility::intToDouble(x, y, 5);
	for (int i = 0; i < 5; i++) { std::cout << y[i] << " "; }
	std::cout << std::endl;

	ArrayUtility::doubleToInt(z, x, 5);
	for (int i = 0; i < 5; i++) { std::cout << x[i] << " "; }
	std::cout << std::endl;
}