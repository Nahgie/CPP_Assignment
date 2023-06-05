#pragma once

class CoffeeMachine {
private:

	int CoffeeBeans = 0, Water = 0, Sugar = 0;

public:

	CoffeeMachine() : CoffeeMachine(0,0,0){}
	CoffeeMachine(int b , int w , int s);

	void show();
	void drinkEspresso();
	void drinkAmericano();
	void drinkSugarCoffee();
	void fill();

};