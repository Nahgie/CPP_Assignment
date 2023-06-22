#include "Histogram.h"

Histogram& Histogram::operator << (std::string text_data) {

	this->texts += text_data;
	return *this;
}

Histogram& Histogram::operator << (char char_data) {

	this->texts += char_data;
	return *this;
}

Histogram& Histogram::operator!() {

	std::cout << texts << std::endl;
	std::transform(this->texts.begin() , this->texts.end() , this->texts.begin() , ::tolower); //문자열을 소문자로 변경
	
	int alpha_cnt = 0;
	
	for (int find_idx = 0; find_idx < this->texts.size(); find_idx++) {
		
		if (std::isalpha(this->texts.at(find_idx))) { alpha_cnt++; }
	
	}

	std::cout << "\n\n총 알파벳 수 " << alpha_cnt << std::endl;

	for (char alpha_init = 'a'; alpha_init <= 'z'; alpha_init++) {

		std::cout << alpha_init << " : ";
		
		for (int find_idx = 0; find_idx < this->texts.size(); find_idx++) {

			if (this->texts.at(find_idx) == alpha_init) { std::cout << "*"; }

		}
		std::cout << std::endl;
	}
	return *this;
}
