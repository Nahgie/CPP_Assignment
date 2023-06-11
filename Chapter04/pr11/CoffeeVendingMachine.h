#pragma once
#include "Container.h"

class CoffeeVendingMachine {
private :
	
	Container tong[3];
	void fill();
	void selectEspresso();
	void selectAmericano();
	void selectSugarCoffee();
	void show();

public :

	void run();

};