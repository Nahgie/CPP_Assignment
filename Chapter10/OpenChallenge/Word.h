#pragma once
#include <string>
#include <vector>

class Word {
private :

	std::vector<std::string> words_en = { "human" , "society" , "dall" , "emotion" , "painting" , "trade" }; // 6 (0,5);
	std::vector<std::string> words_kr = { "인간" , "사회" , "인형" , "감정" , "그림" , "거래" , "곰" , "애인" , "아기" , "사랑" , "전화" , "공책" , "연필" , "휴지" , "안경" , "필통" , "책" , "의자" }; //18 (0,17)

public :

	std::string getWordEN(int random_seed) { return words_en.at(random_seed); }
	std::string getWordKR(int random_seed) { return words_kr.at(random_seed); }
};