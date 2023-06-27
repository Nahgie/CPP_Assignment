#pragma once
#include "Printer.h"

class InkJet : private Printer {
private :

	int ink;

public :

	InkJet(std::string model = "Officejet V40", std::string manufacturer = "HP", int papers = 5, int ink = 10) : Printer(model, manufacturer, papers) {

		this->ink = ink;
	}

	int availableInk() { return this->ink; }
	void print(int pages);
	void show();
};