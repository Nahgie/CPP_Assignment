#pragma once
#include "Circle.h"
#include <string>

class NamedCircle : private Circle {
private :
	
	std::string circleName;

public :
	
	NamedCircle() : NamedCircle(1,"UNKNOWN") {}
	NamedCircle(int r, std::string name) {
		this->setRadius(r);
		this->circleName = name;
	}

	void show() { std::cout << "반지름이 " << this->getRadius() << "인 " << this->circleName << std::endl; }
};