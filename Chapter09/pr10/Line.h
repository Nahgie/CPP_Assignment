#pragma once
#include "Shape.h"

class Line : public Shape {
private:
	void draw() {
		std::cout << "Line" << std::endl;
	}
};