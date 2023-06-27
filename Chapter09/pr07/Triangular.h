#pragma once
#include "Shape.h"

class Triangular : public Shape {
public :

	Triangular(std::string name, int w, int h) : Shape(name, w, h) {}

	double getArea() { return ((double)this->width * (double)this->height) / 2; }
};