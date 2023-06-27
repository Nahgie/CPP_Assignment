#pragma once
#include "Shape.h"

class Rect : public Shape {
private:
	void draw() {
		std::cout << "Rectangle" << std::endl;
	}
};