#include "ColorPoint.h"

void ColorPoint::setPoint(int x , int y) { 
	this->move(x, y); 
}

void ColorPoint::setColor(std::string color) { 
	this->color = color; 
}

void ColorPoint::show() { 
	std::cout << this->color << "색으로 (" << this->getX() << " , " << this->getY() << ")에 위치한 점입니다." << std::endl;
}