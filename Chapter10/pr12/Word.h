#pragma once
#include <string>
#include <vector>

class Word {
private :

	std::vector<std::string> words_en = { "human" , "society" , "dall" , "emotion" , "painting" , "trade" };
	std::vector<std::string> words_kr = { "인간" , "사회" , "인형" , "감정" , "그림" , "거래" };

public :

	std::string getWordEN(int index) { return this->words_en.at(index); }
	std::string getWordKR(int index) { return this->words_kr.at(index); }
	int getSavedCount() { return this->words_en.size() - 1; }
};