#include "Morse.h"

int main() {

	Morse M;
	std::string str , morse;

	std::getline(std::cin, str);
	M.txt2morse(str , morse);
	std::cout << morse << std::endl;
	str.clear(); //str 스트링 비우기

	M.morse2txt(morse, str);
	std::cout << str << std::endl;

	return 0;
}