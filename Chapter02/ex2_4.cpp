#include <iostream>

int main() {

	std::cout << "이름을 입력하세요 : ";

	char name[11];
	std::cin >> name;

	std::cout << "이름은 " << name << " 입니다.";

	return 0;
}