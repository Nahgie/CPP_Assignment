#pragma once
#include "Printer.h"

class Laser : private Printer {
private :

	int toner;

public :

	Laser(std::string model = "SCX-6x45", std::string manufacturer = "삼성전자", int papers = 3, int toner = 20) : Printer(model, manufacturer, papers) {

		this->toner = toner;
	}

	int availableToner() { return this->toner; }
	void print(int pages);
	void show();
};