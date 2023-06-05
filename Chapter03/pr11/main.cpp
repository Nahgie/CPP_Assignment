﻿#include <iostream>
#include "Box.h"

int main() {

	Box b(10, 2);
	b.draw();

	std::cout << std::endl;

	b.setSize(7, 4);
	b.setFill('^');
	b.draw();

	return 0;
}