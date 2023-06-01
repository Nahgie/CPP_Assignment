#include <iostream>
#include <string>

int main() {
	std::string name, address, age;

	std::cout << "이름은?";
	getline(std::cin , name);

	std::cout << "주소는?";
	getline(std::cin, address);

	std::cout << "나이는?";
	getline(std::cin, age);

	std::cout << name << ", " << address << ", " << age << "세" << std::endl;

	return 0;
}