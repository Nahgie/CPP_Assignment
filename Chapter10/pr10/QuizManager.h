#pragma once
#include <random>
#include "Nation.h"

class QuizManager {
private :

	Nation* nation;

	int rSeed();
	void makeQuiz();
	void startQuiz();

public :
	QuizManager();
	~QuizManager();

	void init();
};