#include "QuizManager.h"

QuizManager::QuizManager() { //9개의 데이터를 미리 셋업
	
	nation = new Nation; 

	nation->setData("대한민국", "서울");
	nation->setData("영국", "런던");
	nation->setData("독일", "베를린");
	nation->setData("프랑스", "파리");
	nation->setData("일본", "도쿄");
	nation->setData("대만", "타이베이");
	nation->setData("중국", "베이징");
	nation->setData("러시아", "모스크바");
	nation->setData("인도", "뉴델리");
}

QuizManager::~QuizManager() { delete nation; } // 메모리 해제

int QuizManager::rSeed() { //랜덤시드 생성

	std::random_device rd;
	std::mt19937_64 mt(rd());
	std::uniform_int_distribution<> dist(0, nation->getSavedCount() - 1);

	return dist(mt);
}

void QuizManager::makeQuiz() { //퀴즈정보 입력

	std::cout << "\n현재 " << nation->getSavedCount() << "개의 나라가 입력되어 있습니다.\n\n나라와 수도를 입력하세요( no no 이면 입력끝 )" << std::endl;
	
	std::string in_country, in_capital;

	while (true) {

		std::cout << nation->getSavedCount() + 1 << ">>";
		std::cin >> in_country >> in_capital;
		
		for (int srch_idx = 0; srch_idx < nation->getSavedCount(); srch_idx++) {

			if (nation->getCountry(srch_idx) == in_country || nation->getCapital(srch_idx) == in_capital) {

				std::cout << "already exists !!" << std::endl;
				nation->delData(srch_idx); //동일한 요소를 삭제해 중복된 데이터 입력을 방지함
			}
		}

		if (in_country == "no" || in_capital == "no" || in_country == "No" || in_capital == "No" || in_country == "nO" || in_capital == "nO" || in_country == "NO" || in_capital == "NO") { break; }

		else { nation->setData(in_country,in_capital); }
	}
}

void QuizManager::startQuiz() { //퀴즈 풀기

	int question = 0;
	std::string player_reply;

	while(true){

		question = rSeed();

		std::cout << '\n' << nation->getCountry(question) << "의 수도는 ? ";
		std::cin >> player_reply;

		if (player_reply == "exit" || player_reply == "EXIT" || player_reply == "Exit"){ break; } //exit 입력시 퀴즈 종료
		
		else if (nation->getCapital(question) == player_reply) { std::cout << "\nCorrect !!\n" << std::endl; } //정답시 출력
		
		else { std::cout << "\nNO !!\n" << std::endl; } //오답시 출력
	}
}

void QuizManager::init() {
	
	std::cout << "***** 나라의 수도 맞추기 게임을 시작합니다. *****" << std::endl;

	int mode = 0;

	while (true) {
		
		std::cout << "\n( 1 ) 정보입력 , ( 2 ) 퀴즈풀기 , ( 3 ) 종료 >> ";
		std::cin >> mode;

		switch (mode) {

			case 1: { //퀴즈문제 입력

				makeQuiz();
				break;
		
		}	case 2: { //퀴즈풀기

				startQuiz();
				break;
		
		}	case 3: { //프로그램 종료

				exit(1);
				break;
		
		}	default: { //예외처리

				std::cout << "허용되는 조작이 아닙니다." << std::endl;
				break;
		}}
	}
}