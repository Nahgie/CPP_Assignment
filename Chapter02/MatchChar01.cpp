#include <iostream>

int main() {

	std::string passwd;
	std::string matchpasswd;

	std::cout << "새 암호를 입력하세요>>";
	std::cin >> passwd;

	std::cout << "새 암호를 다시 한 번 입력하세요>>";
	std::cin >> matchpasswd;

	if (passwd == matchpasswd) {

		std::cout << "같습니다." << std::endl;
	
	} else {

		std::cout << "같지 않습니다." << std::endl;
	
	}


	return 0;
}