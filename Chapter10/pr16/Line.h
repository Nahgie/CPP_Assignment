#pragma once
#include "Shape.h"

class Line : public Shape {
protected:
	void draw() { std::cout << "Line" << std::endl; }
};