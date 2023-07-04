#include <iostream>
#include <string>

int main() {
	
	std::string cmd;

	while (true) {

		std::cout << "종료하려면 exit를 입력하세요 >> ";
		std::getline(std::cin, cmd);

		if (cmd == "exit") {
		
			std::cout << "프로그램을 종료합니다." << std::endl;
			break;
		}
	}
}