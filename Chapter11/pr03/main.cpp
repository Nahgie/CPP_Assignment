#include <iostream>

int main() {

	int ch{};

	std::cin.ignore(100,';');

	while ((ch = std::cin.get()) != EOF) {

		std::cout.put(ch);

		if (ch == '\n') { std::cin.ignore(100, ';'); } //다음입력을 위한 처리
	}
	std::cout << std::endl;
}