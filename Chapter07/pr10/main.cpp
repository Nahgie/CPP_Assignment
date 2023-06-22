#include "Statistics.h"

int main() {

	Statistics stat;

	if (!stat) { std::cout << "현재 통계 데이터가 없습니다." << std::endl; }

	int x[5];
	std::cout << "5개의 정수를 입력하라 >>";
	for (int i = 0; i < 5; i++) { std::cin >> x[i]; }

	for (int i = 0; i < 5; i++) { stat << x[i]; }
	stat << 100 << 200;
	~stat;

	int avg;
	stat >> avg;
	std::cout << "avg=" << avg << std::endl;
}