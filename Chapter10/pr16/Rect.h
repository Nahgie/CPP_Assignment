#pragma once
#include "Shape.h"

class Rect : public Shape {
protected:
	void draw() { std::cout << "Rectangle" << std::endl; }
};