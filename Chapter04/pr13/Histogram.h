#pragma once
#include <string>

class Histogram {
private :

	std::string str_data;

public :

	Histogram();
	Histogram(std::string str_data);
	void put(std::string str_data);
	void putc(char char_data);
	void print();

};