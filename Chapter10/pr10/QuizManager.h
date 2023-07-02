#pragma once
#include <iostream>
#include <vector>
#include <random>
#include "Nation.h"

class QuizManager {
private :

	std::vector<Nation> nation_v = { 
		Nation("대한민국", "서울") , Nation("영국", "런던") , Nation("독일", "베를린"),
		Nation("프랑스", "파리"), Nation("일본", "도쿄"), Nation("대만", "타이베이"),
		Nation("인도", "뉴델리"), Nation("러시아", "모스크바"), Nation("미국", "워싱턴") };

	int rSeed();
	void makeQuiz();
	void startQuiz();

public :

	void init();
};