#pragma once
#include "Printer.h"

class Laser : public Printer {
private :

	int Toner;

public :

	Laser() : Laser("SCX-6x45", "삼성전자", 3, 20){}
	Laser(std::string mdl, std::string mfr, int avablCnt, int toner);
	
	int availableToner();
	void printLaser(int pages);
};