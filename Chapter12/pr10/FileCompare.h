#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

class FileCompare {
private :
	std::string srcDirectory, compareDirectory;

	bool compare();
public :
	void init();
};