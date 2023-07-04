#pragma once
#include <iostream>
#include <string>

class Phone {
private :
	std::string name , telnum , address;
public :
	Phone(std::string name = "", std::string telnum = "", std::string address = "") {
		this->name = name;
		this->telnum = name;
		this->address = address;
	}

	friend std::istream& operator >> (std::istream& in, Phone& phone);
	friend std::ostream& operator << (std::ostream& out, Phone phone);
};