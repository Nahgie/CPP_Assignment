#include "Histogram.h"
#include <iostream>
#include <algorithm>

Histogram::Histogram() : Histogram(" ") {}

Histogram::Histogram(std::string str_data) {

	this->str_data = str_data;

}

void Histogram::put(std::string str_data) {

	this->str_data += str_data;

}

void Histogram::putc(char char_data) {

	this->str_data += char_data;

}

void Histogram::print() {

	std::cout << this->str_data << std::endl;

	std::transform(str_data.begin() , str_data.end() , str_data.begin(), ::tolower); //
	
	int sum = 0;

	for (int i = 0; i < str_data.size(); i++) { //알파벳 유효성 검사
		for (char j = 'a'; j <= 'z'; j++) {
			
			if (str_data.at(i) == j) { sum++; }
		
		}
	}

	std::cout << "\n총 알파벳 수 " << sum  << "\n" << std::endl;

	for (char i = 'a'; i <= 'z'; i++) {

		sum = 0;
		
		for (int j = 0; j < str_data.size(); j++) {
			
			if (str_data.at(j) == i) { sum++; }

		}
	
		std::cout << i << " ( " << sum << " )\t: ";
		
		for (int k = 0; k < sum; k++) { std::cout << "*"; }

		std::cout << std::endl;
	}
}