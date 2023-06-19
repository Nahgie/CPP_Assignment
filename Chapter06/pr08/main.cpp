#include "Trace.h"

void f() {
	int a, b, c;
	std::cout << "두 개의 정수를 입력하세요>>";
	std::cin >> a >> b;
	Trace::put("f()", "정수를 입력 받았음");

	c = a + b;
	Trace::put("f()", "합 계산");
	std::cout << "합은" << c << std::endl;
}

int main() {
	Trace::put("main()", "프로그램을 종료합니다.");
	f();
	Trace::put("main()" , "종료");

	Trace::print("f()");
	Trace::print();
}