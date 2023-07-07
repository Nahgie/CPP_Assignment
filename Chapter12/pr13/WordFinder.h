#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class WordFinder {
private :
	std::vector <std::string> words;

	void load();
	void findWord(std::string data);
public :
	void init();
};