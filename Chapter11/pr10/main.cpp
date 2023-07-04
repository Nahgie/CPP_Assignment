#include <iostream>
#include <string>

std::istream& prompt(std::istream& in) {

	std::cout << "암호 ? ";
	return in;
}

int main() {

	std::string password;
	
	while (true) {

		std::cin >> prompt >> password;

		if (password == "exit") { break; }

		else if (password == "C++") { std::cout << "login success!!" << std::endl; }

		else { std::cout << "login fail. try again!!" << std::endl; }
	}
}