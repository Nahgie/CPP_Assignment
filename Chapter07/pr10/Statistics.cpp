#include "Statistics.h"

Statistics& Statistics::operator << (int num) {
	
	index++; // index값 1 추가
	Statistics tmp(index); // 올라간 index 값으로 임시 저장소 생성

	for (int c_index = 0; c_index < index - 1; c_index++) { tmp.arr_p[c_index] = arr_p[c_index]; } //임시 저장소로 값 저장
	tmp.arr_p[index - 1] = num;

	delete[] arr_p; //사용하던 동적배열 메모리 해제

	this->arr_p = new int[index]; // 동적배열 생성
	
	for (int c_index = 0; c_index < index; c_index++) { this->arr_p[c_index] = tmp.arr_p[c_index]; } //임시 저장소에 저장된 값 불러옴

	return *this;
}

int Statistics::operator >> (int& num) {
	
	int sum = 0;

	for (int g_index = 0; g_index < this->index; g_index++) { sum += this->arr_p[g_index]; }

	return num = sum / this->index;
}

bool Statistics::operator ! () {

	return this->index == NULL ? true : false;
}

void Statistics::operator ~() {

	for (int s_index = 0; s_index < this->index; s_index++) { std::cout << arr_p[s_index] << " "; }
	std::cout << std::endl;
}