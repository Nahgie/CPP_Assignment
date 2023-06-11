#include "Person.h"

Person::Person() { name = "Guest"; tel = "010-0000-0000"; }

void Person::set(std::string name, std::string tel) {

	this->name = name;
	this->tel = tel;

}