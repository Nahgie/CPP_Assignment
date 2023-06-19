#include "Random.h"

std::random_device Random::rd;
std::mt19937_64 Random::mt(Random::rd());

int Random::nextInt(int min, int max) {

	std::uniform_int_distribution<> dist(min, max);

	return dist(mt);
}

char Random::nextAlphabet() {

	std::uniform_int_distribution<> c_dist_tolower(65,90); //ASCII 코드 'a' to 'z'
	std::uniform_int_distribution<> c_dist_toupper(97,122); //ASCII 코드 'A' to 'Z'
	std::uniform_int_distribution<> dist(0, 100); // 대소문자 결정 랜덤 시드
	
	return dist(mt) % 2 ? (char)c_dist_tolower(mt) : (char)c_dist_toupper(mt);
}

double Random::nextDouble(double min , double max) {

	std::uniform_real_distribution<> dist(min, max);

	return dist(mt);
}