#include "LoopAdder.h"

void LoopAdder::read() {

	std::cout << this->name << " : " << std::endl;
	std::cout << "처음 수에서 두번째 수까지 더합니다. 두 수를 입력하세요 >> ";
	std::cin >> this->x >> this->y;

}

void LoopAdder::write() {

	std::cout << this->x << "에서 " << y << "까지의 합 = " << this->sum << " 입니다." << std::endl;

}

void LoopAdder::run() {

	read();
	this->sum = calculate();
	write();
}