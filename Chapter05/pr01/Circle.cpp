#include "Circle.h"

Circle::Circle() : Circle(1) {}

Circle::Circle(int r) {

	this->radius = r;
}

double Circle::getRadius() {

	return 3.14 * ((double)radius * (double)radius);
}