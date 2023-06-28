#pragma once
#include "GameObject.h"

class Human : public GameObject {
private :

	char human_symbol = 'H';

public :

	Human(int x, int y, int movedist = 1) : GameObject(x,y,movedist) {}
	
	char getShape() { return this->human_symbol; }
	void move(int x , int y) { this->x = x, this->y = y; }
};