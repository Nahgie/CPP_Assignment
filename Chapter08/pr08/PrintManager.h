#pragma once
#include "Headers.h"

class PrintManager {
private :

	Inkjet* firstPrinter;
	Laser* secondPrinter;

public :

	PrintManager();
	~PrintManager();
	void init();
};