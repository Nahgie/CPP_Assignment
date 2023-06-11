#include <iostream>
#include <string>

int main() {

	std::string str;

	while (str != "tixe") {
		
		std::getline(std::cin , str);
		reverse(str.begin(), str.end());
		
		if (str != "tixe") { std::cout << str << std::endl; }	
	}
	return 0;
}