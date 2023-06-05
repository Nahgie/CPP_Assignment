#include <iostream>
#include "Oval.h"

int main() {

	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	
	std::cout << b.getWidth() << "," << b.getHeight() << std::endl;

	return 0;
}