#include "Circle.h"

void Circle::setCircle(std::string name, int radius) {
	this->name = name;
	this->radius = radius;
}

double Circle::getArea() { return 3.14 * ((double(radius)) * (double(radius))); }

std::string Circle::getName() { return name; }