#pragma once
#include "Circle.h"
#include <string>
#include <iostream>

class NamedCircle : public Circle {
private :
	std::string circleName;

public :

	NamedCircle() : NamedCircle(1, "UNKNOWN") {}
	NamedCircle(int r, std::string name) {
		this->setRadius(r);
		this->circleName = name;
	}

	std::string getCName() { return this->circleName; }
	void setCName(std::string name) { this->circleName = name; }

	void show() { std::cout << "반지름이 " << this->getRadius() << "인 " << this->circleName << std::endl; }
};