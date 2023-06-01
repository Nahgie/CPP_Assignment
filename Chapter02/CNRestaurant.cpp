#include <iostream>

int main() {
	
	int menu = 0;

	std::cout << "***** 승리장에 오신 것을 환영합니다. *****" << std::endl;
	
	while (menu != 4) {
		std::cout << "짬뽕 : 1 , 짜장 : 2 , 군만두 : 3 , 종료 : 4 >>";
		std::cin >> menu;
		
		int Servings = 0;

		switch (menu) {
		
		case 1:
		
			std::cout << "몇 인분? ";
			std::cin >> Servings;
			std::cout << "짬뽕 " << Servings << "인분 나왔습니다." << std::endl;

			break;

		case 2:

			std::cout << "몇 인분? ";
			std::cin >> Servings;
			std::cout << "짜장 " << Servings << "인분 나왔습니다." << std::endl;

			break;

		case 3:

			std::cout << "몇 인분? ";
			std::cin >> Servings;
			std::cout << "군만두 " << Servings << "인분 나왔습니다." << std::endl;

			break;

		case 4:

			break;

		default:
			
			std::cout << "다시 주문하세요!!" << std::endl;

			break;

		}
	}
	
	std::cout << "오늘 영업은 끝났습니다." << std::endl;
	
	return 0;
}