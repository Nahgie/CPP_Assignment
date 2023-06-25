#include "Printer.h"

Printer::Printer(std::string mdl, std::string mfr, int avablCnt) {
	this->model = mdl;
	this->manufacturer = mfr;
	this->printedCount = 0;
	this->availableCount = avablCnt;
}

void Printer::print(int pages) {

	this->printedCount += pages;
	this->availableCount -= pages;
}

int Printer::leftPapers() { 
	
	return this->availableCount; 
}