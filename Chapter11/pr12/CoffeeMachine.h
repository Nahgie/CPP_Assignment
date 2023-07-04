#pragma once
#include "Headers.h"

class CoffeeMachine {
private :
	CoffeeBean* cbean; //커피콩
	Sugar* csugar; //설탕
	Cream* ccream; //크림(프리마)
	Water* cwater; //물
	Cup* ccup; //머그컵

	void reFill();
	void brewCoffee(int pcs);
	void controlPanel();
	void show();
public :
	CoffeeMachine();
	~CoffeeMachine();

	void init();
};