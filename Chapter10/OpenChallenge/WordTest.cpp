#include "WordTest.h"

int WordTest::rNumber(int min = 1 , int max = 4, int ignore = -1) {

	std::random_device rd;
	std::mt19937_64 mt(rd());
	std::uniform_int_distribution<> dist(min, max);

	int tmp = dist(mt);

	if (tmp != ignore) { return tmp; } // 무시해야 할 값과 다르게 나온다면 리턴
	else { rNumber(min , max ,ignore); } // 무시해야 할 값과 동일하게 나온다면 재귀
}

void WordTest::makePaper() {

	int question = rNumber(0,wd.size() - 1);
	
	std::cout << '\n' << wd.at(question).getWordEN() << " ? " << std::endl;
	
	switch (rNumber(1,4)) { //보기가 4개인 문제를 출력
	
		case 1:	{ //정해진 답이 1인 경우

			std::cout << "\n( 1 ) " << wd.at(question).getWordKR() << " ";
			std::cout << "( 2 ) " << wd.at(rNumber(0,wd.size() - 1,question)).getWordKR() << " ";
			std::cout << "( 3 ) " << wd.at(rNumber(0, wd.size() - 1, question)).getWordKR() << " ";
			std::cout << "( 4 ) " << wd.at(rNumber(0, wd.size() - 1, question)).getWordKR() << " :> ";
			
			insertAnswer(1);
			break;

	}	case 2:	{ //정해진 답이 2인 경우
			
			std::cout << "\n( 1 ) " << wd.at(rNumber(0, wd.size() - 1, question)).getWordKR() << " ";
			std::cout << "( 2 ) " << wd.at(question).getWordKR() << " ";
			std::cout << "( 3 ) " << wd.at(rNumber(0, wd.size() - 1, question)).getWordKR() << " ";
			std::cout << "( 4 ) " << wd.at(rNumber(0, wd.size() - 1, question)).getWordKR() << " :> ";
			
			insertAnswer(2);
			break;

	}	case 3:	{ //정해진 답이 3인 경우
			
			std::cout << "\n( 1 ) " << wd.at(rNumber(0, wd.size() - 1, question)).getWordKR() << " ";
			std::cout << "( 2 ) " << wd.at(rNumber(0, wd.size() - 1, question)).getWordKR() << " ";
			std::cout << "( 3 ) " << wd.at(question).getWordKR() << " ";
			std::cout << "( 4 ) " << wd.at(rNumber(0, wd.size() - 1, question)).getWordKR() << " :> ";
			
			insertAnswer(3);
			break;

	}	case 4:	{ //정해진 답이 4인 경우
		
			std::cout << "\n( 1 ) " << wd.at(rNumber(0, wd.size() - 1, question)).getWordKR() << " ";
			std::cout << "( 2 ) " << wd.at(rNumber(0, wd.size() - 1, question)).getWordKR() << " ";
			std::cout << "( 3 ) " << wd.at(rNumber(0, wd.size() - 1, question)).getWordKR() << " ";
			std::cout << "( 4 ) " << wd.at(question).getWordKR() << " :> ";

			insertAnswer(4);
			break;
	}}
}

void WordTest::insertAnswer(int CorrectNum) {

	int player_answer = 0;

	std::cin >> player_answer;

	if (player_answer == CorrectNum) { //정답을 입력하면 출력
		
		std::cout << "\nExcellent !!" << std::endl; 

	} else if (player_answer < 1 || player_answer > 4) { // 1~4를 제외한 입력이 들어오면 프로그램 종료
		
		exit(1); 
	
	} else { // 오답을 입력하면 출력
		
		std::cout << "\nNo. !!" << std::endl; 
	} 
}

void WordTest::init() {

	std::cout << "영어 어휘 테스트를 시작합니다. 1~4 외 다른 입력시 종료합니다." << std::endl;

	while (true) { makePaper(); }
}