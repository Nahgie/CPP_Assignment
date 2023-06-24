#pragma once
#include "Point.h"
#include <string>
#include <iostream>

class ColorPoint : private Point {
private :
	std::string color;
public :
	ColorPoint(int x , int y , std::string color) : Point(x,y){ this->color = color; }

	void setPoint(int x , int y);
	void setColor(std::string color);
	void show();
};