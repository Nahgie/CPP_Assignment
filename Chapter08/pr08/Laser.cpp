#include "Laser.h"

Laser::Laser(std::string mdl, std::string mfr, int avablCnt, int toner) : Printer(mdl, mfr, avablCnt) {
	
	this->Toner = toner;
}

int Laser::availableToner() {
	
	return this->Toner;
}

void Laser::printLaser(int pages) {

	if (this->Toner <= 0) {

		std::cout << "잉크가 부족하여 프린트할 수 없습니다." << std::endl;

	} else if (this->leftPapers() < pages) {

		std::cout << "용지가 부족하여 프린트할 수 없습니다." << std::endl;

	} else {

		this->print(pages);
		this->Toner--;
		std::cout << "프린트하였습니다." << std::endl;
	}
}