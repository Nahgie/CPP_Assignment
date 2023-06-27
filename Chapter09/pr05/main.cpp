#include "Headers.h"

int main() {

	ANDGate andGate;
	ORGate orGate;
	XORGate xorGate;

	andGate.set(true, false); // 양쪽값이 동일하면 true
	orGate.set(true, false); // 양쪽값이 false면 false 둘중 하나라도 true 라면 true
	xorGate.set(true, false); // 양쪽값중 하나라도 다르면 true 같으면 false

	std::cout.setf(std::ios::boolalpha); //불(bool) 값을 문자열로 출력
	std::cout << andGate.operation() << std::endl;
	std::cout << orGate.operation() << std::endl;
	std::cout << xorGate.operation() << std::endl;
}