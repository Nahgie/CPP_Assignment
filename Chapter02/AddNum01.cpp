#include <iostream>

int main() {

	int max_num = 0, result = 0;

	std::cout << "끝 수를 입력하세요 >>";
	std::cin >> max_num;

	for (int i = 0; i <= max_num; i++) {	result += i;	}

	std::cout <<"1 에서 " << max_num << " 까지의 합은 " << result << " 입니다." << std::endl;

	return 0;
}