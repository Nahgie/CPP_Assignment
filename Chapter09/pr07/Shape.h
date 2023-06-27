#pragma once
#include <string>

class Shape {
protected :

	std::string name;
	int width, height;

public :

	Shape(std::string n = "", int w = 0, int h = 0) {
		this->name = n;
		this->width = w;
		this->height = h;
	}

	virtual double getArea() { return 0; }
	std::string getName() { return name; }
};