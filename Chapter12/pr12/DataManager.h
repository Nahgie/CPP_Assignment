#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>

class DataManager {
private :
	std::vector<std::string> words;

	void load();
	void dataInvalidCheck(std::string read);
	bool exist(std::string data);
public :
	void init();
};