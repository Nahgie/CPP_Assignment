#include "Random.h"
#include <random>

int gen_RD_Value();
int gen_RD_Value(int a , int b);

Random::Random() {

	random_value = gen_RD_Value();
}

int Random::next() {
	
	return gen_RD_Value();
}

int Random::nextInRange(int a , int b) {

	return gen_RD_Value(a , b);
}

int gen_RD_Value() {

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dist(0, 32767); //dist(gen)


	return dist(gen);
}

int gen_RD_Value(int a , int b) {

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dist(a, b); //dist(gen)

	return dist(gen);
}