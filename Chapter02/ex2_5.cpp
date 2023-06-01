#include <iostream>

int main() {

	char password[11];
	std::cout << "프로그램을 종료하려면 암호를 입력하세요." << std::endl;

	while (true) {
		std::cout << "암호 : ";
		std::cin >> password;

		if (strcmp(password, "C++") == 0) {
			
			std::cout << "프로그램을 정상 종료합니다." << std::endl;
			break;
		
		} else {
		
			std::cout << "암호가 틀립니다." << std::endl;
		
		}
	}

	return 0;
}