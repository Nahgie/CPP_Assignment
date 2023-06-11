#pragma once
#include <string>
class Person {
private :
	std::string name;

public :

	Person() : Person("Guest") {}
	Person(std::string name) { this->name = name; }
	std::string getName() { return name; }
	void setName(std::string name) { this->name = name; }
};

