#include <iostream>

int main() {

	int ch = 0 , cnt = 0; 

	while ((ch = std::cin.get()) != '\n') {

		if (ch == 'a') { cnt++; }
	}
	std::cout << "a는 : " << cnt << "개 입니다." << std::endl;
}