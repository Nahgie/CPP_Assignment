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
	std::vector<std::string> wordDatas; //vector 사용

	int rSeed(int min , int max , int ignore);
	void load(); //words.txt 파일의 단어를 메모리에 올려놓음
	void pickUpWord();
	void makePaper();
	
public :
	
	void init();
};