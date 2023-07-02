#include "WordTest.h"

int WordTest::rNumber(int min = 1, int max = 4 , int ignore = -1) {

	std::random_device rd;
	std::mt19937_64 mt(rd());
	std::uniform_int_distribution<> dist(min, max);

	int tmp = dist(mt);

	if (tmp != ignore) { return tmp; } // 무시해야 할 값과 다르게 나온다면 반환
	else { rNumber(min, max, ignore); } // 무시해야 할 값과 동일하게 나온다면 재귀
}

void WordTest::startTest() {

	int question; //정답을 저장하는 변수
	bool breakPosition = true; //while 컨트롤용 변수

	std::cout << "영어 어휘 테스트를 시작합니다. ( 1 ~ 4 )외 다른 입력시 종료.\n" << std::endl;

	while (breakPosition) {

		question = rNumber(0, int(wd.size()) - 1); //루프마다 다른 정답을 저장
		
		std::cout << wd.at(question).getWordEN() << '\n' << std::endl;

		switch (rNumber()) {

		case 1:

			std::cout << "( 1 ) " << wd.at(question).getWordKR() << " ";
			std::cout << "( 2 ) " << wd.at(rNumber(0, int(wd.size() - 1), question)).getWordKR() << " ";
			std::cout << "( 3 ) " << wd.at(rNumber(0, int(wd.size() - 1), question)).getWordKR() << " ";
			std::cout << "( 4 ) " << wd.at(rNumber(0, int(wd.size() - 1), question)).getWordKR() << " ";

			breakPosition = solutionCheck(1);
			break;

		case 2:

			std::cout << "( 1 ) " << wd.at(rNumber(0, int(wd.size() - 1), question)).getWordKR() << " ";
			std::cout << "( 2 ) " << wd.at(question).getWordKR() << " ";
			std::cout << "( 3 ) " << wd.at(rNumber(0, int(wd.size() - 1), question)).getWordKR() << " ";
			std::cout << "( 4 ) " << wd.at(rNumber(0, int(wd.size() - 1), question)).getWordKR() << " ";

			breakPosition = solutionCheck(2);
			break;

		case 3:

			std::cout << "( 1 ) " << wd.at(rNumber(0, int(wd.size() - 1), question)).getWordKR() << " ";
			std::cout << "( 2 ) " << wd.at(rNumber(0, int(wd.size() - 1), question)).getWordKR() << " ";
			std::cout << "( 3 ) " << wd.at(question).getWordKR() << " ";
			std::cout << "( 4 ) " << wd.at(rNumber(0, int(wd.size() - 1), question)).getWordKR() << " ";

			breakPosition = solutionCheck(3);
			break;

		case 4:

			std::cout << "( 1 ) " << wd.at(rNumber(0, int(wd.size() - 1), question)).getWordKR() << " ";
			std::cout << "( 2 ) " << wd.at(rNumber(0, int(wd.size() - 1), question)).getWordKR() << " ";
			std::cout << "( 3 ) " << wd.at(rNumber(0, int(wd.size() - 1), question)).getWordKR() << " ";
			std::cout << "( 4 ) " << wd.at(question).getWordKR() << " ";

			breakPosition = solutionCheck(4);
			break;
		}
	}
}

void WordTest::addTest() {

	std::string user_en, user_kr;

	std::cout << "\n영어 단어에 exit를 입력하면 입력 끝" << std::endl;

	while (true) {

		std::cout << "영어 >> ";
		std::cin >> user_en;

		if (user_en == "exit") { break; }

		std::cout << "한글 >> ";
		std::cin >> user_kr;

		Word tmp(user_en, user_kr);

		wd.push_back(tmp);
	}
}

bool WordTest::solutionCheck(int CorrectNum) { //while()을 컨트롤 하기 위해 bool 타입으로 반환

	int userAnswer = 0;

	std::cin >> userAnswer;

	if (CorrectNum == userAnswer) {

		std::cout << "\nExcellent !!\n" << std::endl;
		return true;
	
	} else if (userAnswer < 1 || userAnswer > 4) {
	
		return false;

	} else {

		std::cout << "\nNo. !!\n" << std::endl;
		return true;
	}
}

void WordTest::init() {

	std::cout << "***** 영어 어휘 테스트를 시작합니다. *****" << std::endl;

	int userMode = 0;

	while (true) {

		std::cout << "\n어휘 삽입 : ( 1 ) , 어휘 테스트 : ( 2 ) , 프로그램 종료 (AnyKey) >> ";
		std::cin >> userMode;

		switch (userMode) {
		
		case 1:  //테스트 항목 추가
			
			addTest();
			break;

		case 2:  //테스트 시작
			
			startTest();
			break;

		default: // 프로그램 종료

			exit(1);
			break;
		}
	}
}     