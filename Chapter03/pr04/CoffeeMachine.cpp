#include "CoffeeMachine.h"
#include <iostream>


CoffeeMachine::CoffeeMachine(int b, int w, int s) {

	CoffeeBeans = b;
	Water = w;
	Sugar = s;

}

void CoffeeMachine::show() {

	std::cout << "커피 머신 상태,\t커피:" << CoffeeBeans << "\t물:" << Water << "\t설탕:" << Sugar << std::endl;

}

void CoffeeMachine::drinkEspresso() {

	CoffeeBeans--;
	Water--;

}

void CoffeeMachine::drinkAmericano() {

	CoffeeBeans--;
	Water -= 2;

}

void CoffeeMachine::drinkSugarCoffee() {

	CoffeeBeans--;
	Water -= 2;
	Sugar--;

}

void CoffeeMachine::fill() {

	CoffeeBeans = 10;
	Water = 10;
	Sugar = 10;

}