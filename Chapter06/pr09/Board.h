#pragma once
#include <iostream>
#include <string>

class Board {
private :
	static std::string texts;
	static int text_line;
public :
	static void add(std::string message);
	static void print();
};