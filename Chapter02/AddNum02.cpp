#include <iostream>

inline int sum(int a) {

	int result = 0;

	for (int i = 0; i <= a; i++) {	result += i ;	}

	return result;

}

int main() {
	int max_num = 0;

	std::cout << "끝 수를 입력하세요>>";
	std::cin >> max_num;

	std::cout << "1 에서 " << max_num << " 까지의 합은 " << sum(max_num) << "입니다." << std::endl;

	return 0;
}