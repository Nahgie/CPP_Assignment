#include <iostream>

int sum(int a, int b) {

	int sum = 0;

	if (a < 0 || b < 0) { 
		
		throw "음수 처리 안 됨"; 
	
	} else if (a > b) { 
		
		throw "잘못된 입력";
	}
	
	for (int startPoint = a; startPoint <= b; startPoint++) { 
		
		sum += startPoint; 
	}
	return sum;
}

int main() {

	try {
	
		std::cout << sum(2, 5) << std::endl;
		std::cout << sum(-1, 5) << std::endl;
	
	} catch (const char* s) {

		std::cout << s << std::endl;
	}
}