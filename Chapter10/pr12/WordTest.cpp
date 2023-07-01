#include "WordTest.h"

int WordTest::rNumber(int min = 0, int max = 5 , int ignore = -1) {

	std::random_device rd;
	std::mt19937_64 mt(rd());
	std::uniform_int_distribution<> dist(min, max);

	int tmp = dist(mt);

	if (tmp != ignore) { return tmp; } // 무시해야 할 값과 다르게 나온다면 리턴
	else { rNumber(min, max, ignore); } // 무시해야 할 값과 동일하게 나온다면 재귀
}

void WordTest::makePaper() {

}

bool WordTest::insertAnswer(int CorrectNum) {

}

void WordTest::init() {

}