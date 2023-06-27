#include "Laser.h"

void Laser::print(int pages) {

	if (pages > this->availableCount || pages > this->toner) {

		std::cout << "용지 또는 잉크가 부족하여 프린트할 수 없습니다." << std::endl;

	}
	else {

		this->toner--;
		this->availableCount -= pages;
		this->printedCount += pages;
		std::cout << "프린트하였습니다." << std::endl;

	}
}

void Laser::show() {

	std::cout << "레이저 : " << this->model << " , " << this->manufacturer << " , " << "남은 종이 " << this->availableCount << "장 , 남은 토너" << toner << std::endl;
}