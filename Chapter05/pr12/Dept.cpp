#include "Dept.h"

/*Dept::Dept(const Dept& dept) { //복사 생성자

	this->size = dept.size;
	this->scores = new int[dept.size];

	for (int i = 0; i < this->size; i++) { this->scores[i] = dept.scores[i]; }
}*/

Dept::~Dept() { delete[] scores; }

void Dept::read() {

	std::cout << size << "개 점수 입력>>";
	
	for (int i = 0; i < size; i++) { std::cin >> scores[i]; }
}

bool Dept::isOver60(int index) {

	if (scores[index] > 60) { return true; }
		
	else { return false; }
}