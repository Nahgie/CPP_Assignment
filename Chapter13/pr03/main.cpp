#include <iostream>

int get() throw(char*) {

	int userInput = 0;

	std::cout << "0~9 사이의 정수 입력 >> ";

	std::cin >> userInput;

	if (userInput < 0 || userInput > 9) { throw "input fault"; }

	return userInput;
}

int main() {

	int a, b;

	while (true) {

		try {

			a = get();
			b = get();
			std::cout << a << " x " << b << " = " << a * b << std::endl;
		}

		catch (const char* errMessage) {

			std::cout << errMessage << "예외 발생, 계산할 수 없음" << std::endl;
		}
	}
}