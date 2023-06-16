#pragma once
#include <iostream>

class Circle {
private :

	int radius;

public :

	Circle(int r) { this->radius = r; }
	int getRadius() { return radius; }
	void setRadius(int r) { radius = r; }
	void show() { std::cout << "반지름이 " << radius << " 인 원" << std::endl; }
};