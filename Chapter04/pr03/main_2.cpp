#include <iostream>
#include <string>

int main() {

	std::string str;
	std::getline(std::cin, str);

	int result = 0 , index = 0;
	
	while (1) {

		index = str.find('a', index += 1);

		if (index < 0) { break; }
		else { result++; }
	}

	std::cout << "문자 a는 " << result << "개 있습니다." << std::endl;

	return 0;
}