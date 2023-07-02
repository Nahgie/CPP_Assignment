#include <iostream>
#include <map>

int main() {
	
	int userInput = 0 , score = 0;
	std::string name;
	std::map<std::string, int> data;

	std::cout << "***** 점수관리 프로그램 HIGH SCORE를 시작합니다. *****" << std::endl;

	while (true) {

		std::cout << "\n입력 : ( 1 ) , 조회 : ( 2 ) , 종료 : ( 3 ) >> ";
		std::cin >> userInput;

		switch (userInput) {

			case 1: { //데이터 입력

				std::cout << "\n이름과 점수>> ";
				std::cin >> name >> score;

				data.insert(std::make_pair(name, score));
				break;

		}	case 2: { //데이터 검색및 결과 출력

				std::cout << "\n이름 >> ";
				std::cin >> name;
					
				std::cout << '\n' << name << "의 점수는 " << data.at(name) << std::endl;
				break;

		}	case 3: {
				
				exit(1);
				break;

		}	default: {
		
			std::cout << "허용하지 않는 조작입니다." << std::endl;
				break;
		}}
	}
}