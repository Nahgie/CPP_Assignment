#include <iostream>

int main() {

	char ch{};
	int cnt = 0;

	while (ch != '\n') {
		
		std::cin.get(ch);
		
		if (ch == ' ') { cnt++; }
	}
	std::cout << "빈칸은 " << cnt << "개 입니다." << std::endl;
}