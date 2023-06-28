#pragma once
#include "GameObject.h"

class Food : public GameObject{
private :

	char food_symbol = '@';

public :

	Food(int x, int y, int movedist = 1) : GameObject(x, y, movedist) {}

	void setShape(char Symbol = 'H') { this->food_symbol = Symbol; }
	char getShape() { return this->food_symbol; }
	void move(int x, int y) { this->x = x, this->y = y; }
};