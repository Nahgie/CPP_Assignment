#pragma once
#include <iostream>

class Circle {
private :
	int radius;
public :
	Circle(int radius = 0) { this->radius = radius; }

	Circle(Circle& circ) { this->radius = circ.radius; }
	friend Circle& operator ++ (Circle& base);
	friend Circle operator ++ (Circle& base, int back);

	void show() { std::cout << "radius = " << radius << " 인 원" << std::endl; }
};