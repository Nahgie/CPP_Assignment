#pragma once
#include "Printer.h"

class Inkjet : public Printer {
private :

	int Ink;

public :

	Inkjet() : Inkjet("Officejet V40", "HP", 5, 10) {}
	Inkjet(std::string mdl, std::string mfr, int avablCnt, int avablInk);

	int availableInk();
	void printInkJet(int pages);
};