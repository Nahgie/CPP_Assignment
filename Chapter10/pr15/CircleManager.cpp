#include "CircleManager.h"

CircleManager::~CircleManager() { delete tmp; }

void CircleManager::addCircle() {

	int cRadius = 0;
	std::string cName;

	std::cout << "생성하고자 하는 원의 반지름과 이름은 >> ";
	std::cin >> cRadius >> cName;

	tmp = new Circle(cRadius, cName); //객체 생성
	circles.push_back(tmp); //생성한 객체를 vector에 삽입
}

void CircleManager::delCircle() {

	int cRadius = 0;
	std::string cName;

	std::cout << "삭제하고자 하는 원의 이름은 >> ";
	std::cin >> cName;

	for (int srch_idx = 0; srch_idx < circles.size(); srch_idx++) {

		if (circles.at(srch_idx)->getName() == cName) {

			circles.erase(circles.begin() + srch_idx); //벡터 원소지우기 (벡터 시작부분 + 지울 원소의 인덱스)
		}
	}
}

void CircleManager::showALL() {

	std::cout << std::endl;

	for (int srch_idx = 0; srch_idx < circles.size(); srch_idx++) {

		std::cout << circles[srch_idx]->getName() << std::endl;
	}
}

void CircleManager::init() {
	
	int playerMode = 0;

	std::cout << "원을 삽입하고 삭제하는 프로그램입니다." << std::endl;

	while (true) {

		std::cout << "\n삽입 : ( 1 ) , 삭제 : ( 2 ) , 모두보기 : ( 3 ) , 종료 : ( 4 ) >> ";
		std::cin >> playerMode;

		switch (playerMode) {

			case 1:{ //삽입
			
				addCircle();
				break;
		
		}	case 2: { //삭제
			
				delCircle();
				break;

		}	case 3: { //모두보기
			
				showALL();
				break;

		}	case 4: { //종료
			
				exit(1);
				break;

		}	default: { //예외처리

				std::cout << "허용하지 않는 조작입니다." << std::endl;
				break;
		}}
	}
}