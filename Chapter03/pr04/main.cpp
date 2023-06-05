#include <iostream>
#include "CoffeeMachine.h"

int main() {
	CoffeeMachine java(5, 10, 3);

	java.drinkEspresso();
	java.show();

	java.drinkAmericano();
	java.show();

	java.drinkSugarCoffee();
	java.show();

	java.fill();
	java.show();

	return 0;
}