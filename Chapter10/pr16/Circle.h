#pragma once
#include "Shape.h"

class Circle : public Shape {
protected:
	void draw() { std::cout << "Circle" << std::endl; }
};