#include <iostream>
#include "Circle.h"

void swap(Circle &a , Circle &b) {

	Circle tmp;
	
	tmp = a;
	a = b;
	b = tmp;
}

int main() {

	Circle first(5), second(11);

	std::cout << "swap 전 first : " << first.getRadius() << "\nswap 전 second : " << second.getRadius() << std::endl;

	swap(first, second);

	std::cout << "swap 후 first : " << first.getRadius() << "\nswap 후 second : " << second.getRadius() << std::endl;

	return 0;
}