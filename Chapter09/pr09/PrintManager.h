#pragma once
#include "Headers.h"

class PrintManager {
private :

	Laser* laserPrinter;
	InkJet* inkjetPrinter;

	void prtSelector();

public :

	PrintManager() {
		laserPrinter = new Laser;
		inkjetPrinter = new InkJet;
	}

	void init();
};