#include <iostream>
#include <string>

int main() {

	std::string song("Falling in love with you");
	std::string elvis("Elvis Presley");
	std::string singer;

	std::cout << song + "를 부른 가수는";
	std::cout << "(힌트 : 첫글자는" << elvis[0] << ")?";
	
	std::getline(std::cin, singer);
	if (singer == elvis) {

		std::cout << "맞았습니다.";

	} else {

		std::cout << "틀렸습니다." + elvis + "입니다." << std::endl;

	}

	return 0;
}