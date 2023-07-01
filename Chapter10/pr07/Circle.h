#pragma once
class Circle {
private :
	int radius;
public :
	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return this->radius; }
};