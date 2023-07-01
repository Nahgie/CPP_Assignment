#pragma once
#include <iostream>
#include <random>
#include "Word.h"

class WordTest {
private :

	Word* wd;
	int rNumber(int min, int max , int ignore);
	void makePaper();
	void insertAnswer(int CorrectNum);

public :

	WordTest() { wd = new Word; }
	~WordTest() { delete wd; }

	void init();
};