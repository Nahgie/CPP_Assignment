#include "InkJet.h"

void InkJet::print(int pages) {

	if (pages > this->availableCount || pages > this->ink) {

		std::cout << "용지 또는 잉크가 부족하여 프린트할 수 없습니다." << std::endl;

	}
	else {

		this->ink -= pages;
		this->availableCount -= pages;
		std::cout << "프린트하였습니다." << std::endl;

	}
}

void InkJet::show() {

	std::cout << "잉크젯 : " << this->model << " , " << this->manufacturer << " , " << "남은 종이 " << this->availableCount << "장 , 남은 잉크" << ink << std::endl;
}