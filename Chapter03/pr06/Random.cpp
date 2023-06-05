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

	int tmp = dist(gen);

	if (tmp % 2 == 0) { return tmp; }
	else { gen_RD_Value(); } //짝수가 아닐 경우 재귀호출

}

int gen_RD_Value(int a , int b) {

	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dist(a, b); //dist(gen)

	int tmp = dist(gen);

	if (tmp % 2 == 0) { return tmp; }
	else { gen_RD_Value(a, b); } //짝수가 아닐 경우 재귀호출 오버로드 된 함수 주의! gen_RD_Value(); 호출시 인자 2개를 받는 함수로 호출이 안 됨

}