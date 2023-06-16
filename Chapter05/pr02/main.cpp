#include <iostream>

void half(double &value) {

	value *= 0.5;
}

int main() {
	double n = 20;
	half(n);
	std::cout << n << std::endl;

	return 0;
}