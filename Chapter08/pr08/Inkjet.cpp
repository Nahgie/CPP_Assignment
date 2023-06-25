#include "Inkjet.h"

Inkjet::Inkjet(std::string mdl, std::string mfr, int avablCnt , int ink) :Printer(mdl, mfr, avablCnt) {
	
	this->Ink = ink;
}

int Inkjet::availableInk() {
	
	return this->Ink;
}

void Inkjet::printInkJet(int pages) {

	if (this->Ink <= 0) {

		std::cout << "잉크가 부족하여 프린트할 수 없습니다." << std::endl;

	} else if (this->leftPapers() < pages) {

		std::cout << "용지가 부족하여 프린트할 수 없습니다." << std::endl;

	} else {

		this->print(pages);
		this->Ink -= pages;
		std::cout << "프린트하였습니다." << std::endl;
	}
}