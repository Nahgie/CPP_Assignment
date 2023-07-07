#include "WordFinder.h"

void WordFinder::load() {

	std::string readLine;
	std::ifstream rFile("words.txt", std::ios::in | std::ios::binary);

	if (!rFile) {

		std::cout << "파일을 읽을수 없습니다.\n프로그램을 종료합니다." << std::endl;
		exit(1);
	}

	int index = 0;

	while (std::getline(rFile, readLine)) {

		this->words.push_back(readLine);
		std::cout << "..\\" << this->words[index++] << std::endl;
	}
	system("cls"); //로딩후 콘솔창 클리어
	rFile.close();
}

void WordFinder::findWord(std::string data) {

	if (data == "exit" || data == "Exit" || data == "EXIT") { 
		
		std::cout << "\n프로그램을 종료합니다.\n" << std::endl;
		exit(0); 
	}
	
	int findWords = 0; //찾은 단어의 갯수를 저장

	for (int srch_idx = 0; srch_idx < this->words.size(); srch_idx++) {
		
		int index = this->words[srch_idx].find(data); //각 요소마다 반환값을 저장

		if (index != -1 && words[srch_idx].at(0) == data.at(0)) { //words의 각 요소의 반환값이 -1이 아니어야 하고 단어의 시작알파벳이 양쪽다 일치해야지 출력
		
			std::cout << words[srch_idx] << std::endl;
			findWords++; //위 조건에 맞는 단어를 찾을때 마다 1씩 증가
		}
	}
	if (findWords <= 0) { std::cout << "\n발견할 수 없음.\n" << std::endl; } //찾은 단어가 없을 경우 출력
}

void WordFinder::init() {

	load();
	std::cout << "...words.txt 파일 로딩 완료.\n검색을 시작합니다. 단어를 입력해 주세요.\n" << std::endl;

	std::string userInput;

	while (true) {
		
		std::cout << "\n단어 >> ";
		std::cin >> userInput;

		findWord(userInput);
	}
}