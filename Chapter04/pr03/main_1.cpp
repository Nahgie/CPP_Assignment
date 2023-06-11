#include <iostream>
#include <string>

int main() {

	std::string str;
	std::getline(std::cin, str);

	int sum = 0;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'a') {
			sum++;
		}
	}

	std::cout << "문자 a는 " << sum << "개 있습니다." << std::endl;

	return 0;
}