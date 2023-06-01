#include <iostream>

int main() {

	char string[101];
	int counter = 0;
	
	std::cout << "문자들을 입력하라(100개 미만)." << std::endl;
	std::cin.getline(string,100);

	for (int i = 0; i <= 100; i++) {
		if (string[i] == 'x') {
			counter++;
		}
	}

	std::cout << "x의 개수는 " << counter << std::endl;

	return 0;
}