#include "Circle.h"

Circle::Circle(int radius) { this->radius = radius; }

void Circle::setRadius(int radius) { this->radius = radius; }

double Circle::getArea() { return 3.14 * ((double)radius * (double)radius); }