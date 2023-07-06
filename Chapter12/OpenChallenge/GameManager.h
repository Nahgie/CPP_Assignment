#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>

class GameManager {
private :
	
	std::string compareWord;

	int rSeed(int min , int max , int ignore);
	void pickUpWord();
	void makePaper();

public :
	
	void init();
};