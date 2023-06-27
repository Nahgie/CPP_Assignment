#pragma once
#include "Shape.h"

class Rect : public Shape {
public :

	Rect(std::string name, int w, int h) : Shape(name, w, h) {}

	double getArea() { return this->width * this->height; }
};