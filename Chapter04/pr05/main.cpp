#include <iostream>
#include <string>
#include <random>

int main() {
	std::string str;
	std::string r_str;

	std::random_device rd;
	std::mt19937 gen(rd());
	
	while (str != "exit") {

		std::getline(std::cin, str);
		std::uniform_int_distribution<> dist(1, str.size());
		
		r_str = str;
		r_str[dist(rd)] += 1;

		if (str != "exit") { std::cout << r_str << " : " << r_str.size() << std::endl; }

	}
	return 0;
}