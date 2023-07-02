#pragma once
#include <string>

class Circle {
private :

	std::string name;
	int radius;

public :

	Circle(int radius, std::string name) {
		
		this->radius = radius;
		this->name = name;
	}

	double getArea() { return 3.14 * (int(this->radius) * int(this->radius)); }
	std::string getName() { return this->name; }
};