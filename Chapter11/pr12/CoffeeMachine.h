#pragma once
#include "Headers.h"

class CoffeeMachine {
private :

	CoffeeBean* cbean;
	Sugar* csugar;
	Cream* ccream;
	Water* cwater;
	Cup* ccup;

	void reFill();
	void brewCoffee(int pcs);
	void controlPanel();

public :

	CoffeeMachine();
	~CoffeeMachine();
	void show();
	void init();
};