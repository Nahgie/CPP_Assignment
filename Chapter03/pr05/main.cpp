#include <iostream>
#include "Random.h"

int main() {
	
	Random r;
	std::cout << "--0에서 32767까지 랜덤 정수 10 개--" << std::endl;

	for (int i = 0; i < 10; i++) {
		std::cout << r.next() << " ";
	}

	std::cout << std::endl << std::endl << "--2에서 4까지의 랜덤 정수 10 개--" << std::endl;

	for (int i = 0; i < 10; i++) {
		std::cout << r.nextInRange(2,4) << " ";
	}

	std::cout << std::endl;

	return 0;
}