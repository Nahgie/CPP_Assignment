#include <iostream>
#include "Random.h"

int main() {

	std::cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다." << std::endl;
	for (int i = 0; i < 10; i++) { std::cout << Random::nextInt() << " "; }

	std::cout << "\n\n알파벳을 랜덤하게 10개 출력합니다." << std::endl;
	for (int j = 0; j < 10; j++) { std::cout << Random::nextAlphabet() << " "; }

	std::cout << "\n\n랜덤한 실수를 10개 출력합니다." << std::endl;
	for (int k = 0; k < 10; k++) { std::cout << Random::nextDouble() << " "; }
	std::cout << std::endl;
}