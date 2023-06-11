#pragma once
#include <string>

class Circle {
private:

	int radius = 0;
	std::string name;

public:

	void setCircle(std::string name, int radius);
	double getArea();
	std::string getName();
};