#pragma once
class Circle {
private :
	int radius;
public :
	Circle(int radius = 0) { this->radius = radius; }
	int getRadius() { return radius;}
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * ((int)radius * (int)radius); }
};