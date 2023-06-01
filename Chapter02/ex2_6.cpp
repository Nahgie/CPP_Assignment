#include <iostream>

int main() {

	std::cout << "주소를 입력하세요 :";

	char address[100];
	std::cin.getline(address,100);

	std::cout << "주소는 " << address << " 입니다." << std::endl;

	return 0;
}