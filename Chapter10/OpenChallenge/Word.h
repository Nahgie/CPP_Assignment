#pragma once
#include <string>

class Word {
private :

	std::string word_en , word_kr;
public :

	Word(std::string EN, std::string KR) {
		this->word_en = EN;
		this->word_kr = KR;
	}
	std::string getWordEN() { return word_en; }
	std::string getWordKR() { return word_kr; }
};