#include "SortedArray.h"

void SortedArray::sort() { //private function

	std::sort(this->p, this->p + this->size);
}

void SortedArray::show() { //public function

	std::cout << "배열 출력 : ";

	for (int srch_idx = 0; srch_idx < this->size; srch_idx++) {
		
		this->p[srch_idx] = p[srch_idx];

		std::cout << this->p[srch_idx] << " ";
	}
	std::cout << '\n' << std::endl;
}

SortedArray::SortedArray(){ //기본 생성자
	
	this->size = 0;
	this->p = nullptr;
}

SortedArray::SortedArray(SortedArray& src) { // 복사 생성자
	
	this->size = src.size;
	this->p = new int[this->size];

	for (int copy_idx = 0; copy_idx < size; copy_idx++) { this->p[copy_idx] = src.p[copy_idx]; }
}
	
SortedArray::SortedArray(int p[], int size) { //생성자

	this->size = size;
	this->p = new int[size];
	
	for (int copy_idx = 0; copy_idx < this->size; copy_idx++) { this->p[copy_idx] = p[copy_idx]; }

	sort();
}
	
SortedArray::~SortedArray() { //소멸자
	
	delete[] p; 
}
	
SortedArray SortedArray::operator + (SortedArray& op2) {
	
	int *add_arr = new int [this->size + op2.size];

	for (int i = 0; i < this->size + op2.size; i++) { 
		
		(i < this->size) ? (add_arr[i] = this->p[i]) : (add_arr[i] = op2.p[i - this->size]); // (조건) ? 참 : 거짓;
	
	}
	SortedArray tmp(add_arr, this->size + op2.size);

	return tmp;
}
	
SortedArray& SortedArray::operator = (const SortedArray& op2) {

	delete[] this->p;

	this->size = op2.size;
	this->p = new int[this->size];

	for (int copy_idx = 0; copy_idx < this->size; copy_idx++) { this->p[copy_idx] = op2.p[copy_idx]; }
	
	return *this;
}