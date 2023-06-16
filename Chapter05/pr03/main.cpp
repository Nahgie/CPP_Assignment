#include <iostream>

void combine(std::string maintxt , std::string subtxt , std::string &result) {

	result = maintxt + " " + subtxt;

}

int main() {

	std::string text1("I love you"), text2("very much");
	std::string text3;
	combine(text1, text2, text3);
	std::cout << text3;

	return 0;
}