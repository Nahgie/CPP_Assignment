#include <iostream>

int main() {

	char name[101];
	int Length_Num = 0;
	std::string max_length_name;

	std::cout << "5 명의 이름을 ';'으로 구분하여 입력하세요" << std::endl;

	for (int i = 0; i < 5; i++) {
		
		std::cin.getline(name, 100, ';');

		if (Length_Num < strlen(name)) {
			Length_Num = strlen(name);
			max_length_name = name;
		
		}

		std::cout << i + 1 << " : " << name << std::endl;

	}

	std::cout << "가장 긴 이름은 " << max_length_name << std::endl;

	return 0;
}