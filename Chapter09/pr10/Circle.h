#pragma once
#include "Shape.h"

class Circle : public Shape {
private :
	void draw() {
		std::cout << "Circle" << std::endl;
	}
};