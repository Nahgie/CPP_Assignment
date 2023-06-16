#pragma once
#include <iostream>

class Buffer {
private :
	std::string text;
public :
	Buffer(std::string text) { this->text = text; }
	void add(std::string next) { this->text += next; }
	void print() { std::cout << text << std::endl; }
};