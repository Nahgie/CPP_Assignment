#include "GradeManager.h"

void GradeManager::rating() {

	std::cin >> this->score;

	if (this->score < 0 || this->score > 100) {

		throw "점수의 범위를 넘어섰습니다.";
	
	} else if (this->score >= 90) {

		std::cout << 'A';
	
	} else if (this->score >= 80) {

		std::cout << 'B';
	
	} else if (this->score >= 70) {

		std::cout << 'C';
	
	} else if (this->score >= 60) {

		std::cout << 'D';
	
	} else {
	
		std::cout << 'F';
	}
}

void GradeManager::init() {

	try {
	
		rating();
	
	} catch (const char* ErrMessage) {

		std::cout << ErrMessage << std::endl;
	}
}