#include <iostream>
#include <map>

int main() {

	std::cout << "***** 암호 관리 프로그램 WHO를 시작합니다. *****" << std::endl;

	int userMode = 0;
	std::string userName, passwd;
	std::map<std::string, std::string> userDatas;

	while (true) {

		std::cout << "\n삽입 : ( 1 ) , 검사 : ( 2 ) , 종료 : ( 3 ) >> ";
		std::cin >> userMode;
		
		switch (userMode) {
		
		case 1: {
			
			std::cout << "이름 암호>> ";
			std::cin >> userName >> passwd;

			userDatas.insert(std::make_pair(userName, passwd));
			break;
		
		} case 2: {

			std::cout << "이름? ";
			std::cin >> userName;
			
			while (true) {

			std::cout << "암호? ";
			std::cin >> passwd;
			
				if (userDatas.at(userName) == passwd) { //key로 검색후 value로 동일한 값인지 체크
					
					std::cout << "\n통과!!\n" << std::endl; 
					break;
				
				} else { 
					
					std::cout << "\n실패~~\n" << std::endl; 
				}
			}
			break;
		
		} case 3: {
			
			std::cout << "프로그램을 종료합니다." << std::endl;
			exit(1);
			break;
		
		} default: {
			
			std::cout << "허용하지 않는 조작입니다." << std::endl;
			break;
		}}
	}
}