#pragma once
#include <string>

class Seat {
private :
	std::string name;
public :
	Seat() : Seat("---") {}
	Seat(std::string name) { this->name = name; }

	void setName(std::string name) { this->name = name; }
	std::string getName() { return this->name; }
};