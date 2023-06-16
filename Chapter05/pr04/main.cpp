#include <iostream>

bool bigger(int a, int b, int& big) {
	
	if (a == b) {
		return true;
	} else if (a > b) {
		big = a;
		return false;
	} else {
		big = b;
		return false;
	}
}

int main() {
	
	int a = 0 , b = 0 , big = 0;

	std::cin >> a >> b;
	std::cout << " T or F : " << bigger(a, b, big) << " 큰 수 : " << big << std::endl;

	return 0;
}