#pragma once
#include <iostream>
#include <string>
#include <algorithm>

class Histogram {
private :
	std::string texts;
public :
	Histogram() : Histogram(" ") {}
	Histogram(std::string texts) { this->texts = texts; }
	Histogram& operator << (std::string text_data);
	Histogram& operator << (char char_data);
	Histogram& operator ! ();
};