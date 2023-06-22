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
	friend Circle operator + (int num ,Circle& base);

	void show() { std::cout << "radius = " << radius << " 인 원" << std::endl; }
};