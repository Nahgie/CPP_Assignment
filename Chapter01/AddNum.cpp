#include <iostream>

int main() {
	static int Sum , i;

	for (i = 0; i <= 10; i++)	{	Sum += i;	}

	std::cout << (i - (i - 1)) << "에서 " << (i - 1) << "까지 더한 결과는 " << Sum << "입니다." << std::endl;
	
	return 0;
}