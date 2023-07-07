#include "GameManager.h"

int GameManager::rSeed(int min = 0, int max = 0, int ignore = -1) {

	std::random_device rd;
	std::mt19937_64 mt(rd());
	std::uniform_int_distribution<> dist(min, max);

	int tmp = dist(mt);

	if (tmp == ignore) { rSeed(min, max, ignore); }

	else { return tmp; }
}

void GameManager::load() {

	std::string readLine; //임시저장소

	std::ifstream file("words.txt");

	if (!file) {

		std::cout << "파일을 찾을 수 없습니다.\n프로그램을 종료합니다." << std::endl;
		exit(1);
	}

	while (std::getline(file, readLine)) {

		std::transform(readLine.begin(), readLine.end(), readLine.begin(), std::tolower); //섞여있는 대문자를 소문자로 변경
		wordDatas.push_back(readLine);
	}
	file.close();
}

void GameManager::makePaper() {

	std::string copiedStr = compareWord;
	char userData;

	//(문자열 길이기반) 무작위로 마스킹 처리할 문자 하나를 선택
	int firstIndex = rSeed(0, int(copiedStr.size()) - 1);
	int secondIndex = rSeed(0, int(copiedStr.size()) - 1,firstIndex);

	//정답저장
	char firstChar = copiedStr.at(firstIndex);
	char secondChar = copiedStr.at(secondIndex);

	// 마스킹 처리
	copiedStr.at(firstIndex) = '-';
	copiedStr.at(secondIndex) = '-';

	std::cout << "\n[ " << copiedStr << " ]" << std::endl;
	
	int wrongCount = 0; //틀린횟수 저장

	while (true) {

		if (copiedStr == compareWord) { break; } // 정답을 맞출 경우 루프 탈출

		std::cout << ">> ";
		std::cin >> userData;

		if (userData == firstChar ) {

			copiedStr.at(firstIndex) = userData;
			std::cout << copiedStr << std::endl;

		} else if (userData == secondChar) {

			copiedStr.at(secondIndex) = userData;
			std::cout << copiedStr << std::endl;

		} else {

			wrongCount++;
			
			if (wrongCount >= 5) {
			
				std::cout << '\n' << wrongCount << "번 실패하였습니다.\n" << compareWord << std::endl;
				break;
			}
		}
	}
}

void GameManager::pickUpWord() {
	
	compareWord = wordDatas[rSeed(0, int(wordDatas.size() - 1))];
}

void GameManager::init() {

	std::cout << "-----------------------------------\n지금부터 행맨 게임을 시작합니다.\n-----------------------------------" << std::endl;
	
	load();

	char userMode;

	while (true) {

		pickUpWord(); //문제에 사용할 단어선택
		makePaper(); //문제 생성

		std::cout << "\nNext ( y / n ) ? ";
		std::cin >> userMode;

		if (userMode == 'y' || userMode == 'Y') {}

		else if (userMode == 'n' || userMode =='N') {
			
			break;
		
		} else {

			std::cout << "\n* 잘못된 선택지입니다. 게임을 계속 합니다. *\n" << std::endl;
		}
	}
}