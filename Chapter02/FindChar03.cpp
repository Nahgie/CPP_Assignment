#include <iostream>

int main() {

	char string[101];

	std::cout << "문자열 입력>>";
	std::cin >> string;

	for (int i = 0; string[i] != '\0'; i++) {
		for (int j = 0; j <= i; j++) {

			std::cout << string[j];
					
		}
		std::cout << std::endl;
	}

	return 0;
}