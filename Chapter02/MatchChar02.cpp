#include <iostream>

int main() {
	std::string command;

	do {
		std::cout << "종료하고싶으면 yes를 입력하세요.>>";
		std::cin >> command;

	} while (command != "yes");

	std::cout << "종료합니다..." << std::endl;
	
	return 0;
}