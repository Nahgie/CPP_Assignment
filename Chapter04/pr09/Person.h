#pragma once
#include <string>

class Person {
private :
	std::string name;
	std::string tel;

public :

	Person();
	std::string getName() { return name; }
	std::string getTel() { return tel; }
	void set(std::string name, std::string tel);

};