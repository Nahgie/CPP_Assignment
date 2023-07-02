#pragma once
#include <iostream>
#include <vector>
#include <random>
#include "Word.h"

class WordTest {
private :

	std::vector<Word> wd = { 
		Word("human", "인간"), Word("society", "사회"), Word("emotion", "감정"),
		Word("painting", "그림"), Word("dall", "인형"), Word("trade", "거래") };

	int rNumber(int min, int max , int ignore);
	void startTest();
	void addTest();
	bool solutionCheck(int CorrectNum);

public :

	void init();
};