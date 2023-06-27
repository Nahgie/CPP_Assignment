#pragma once
#include "Shape.h"

class Oval : public Shape {
public :
	
	Oval(std::string name, int w, int h) : Shape(name, w, h) {}

	double getArea() { return 3.14 * (this->width * this->height); }
};