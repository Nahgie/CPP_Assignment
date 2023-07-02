#pragma once
#include <string>

class Word {
private :

	std::string words_en , words_kr;

public :

	Word(std::string EN, std::string KR) {

		this->words_en = EN;
		this->words_kr = KR;
	}

	std::string getWordEN() { return this->words_en; }
	std::string getWordKR() { return this->words_kr; }
};