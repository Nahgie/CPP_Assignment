#pragma once
#include <string>
#include <iostream>
class Circle {
private :
	std::string name;
	int radius;
public :
	
	Circle(int radius = 1, std::string name = "") {
		this->radius = radius;
		this->name = name;
	}

	friend std::istream& operator >> (std::istream& in , Circle& circle);
	friend std::ostream& operator << (std::ostream& out, Circle circle);
};