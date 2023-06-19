#pragma once
#include <random>
class Random {
private : //static void seed()를 대체할 시드 생성기
	static std::random_device rd;
	static std::mt19937_64 mt;
public :
	static int nextInt(int min = 1, int max = 100);
	static char nextAlphabet();
	static double nextDouble(double min = 0, double max = 1.0);
};