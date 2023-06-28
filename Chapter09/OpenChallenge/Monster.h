#pragma once
#include "GameObject.h"

class Monster : public GameObject{
private :
	
	char monster_symbol = 'M';

public :
	
	Monster(int x, int y, int movedist = 2) : GameObject(x, y, movedist) {}

	char getShape() { return this->monster_symbol; }
	void move(int x, int y) { this->x = x, this->y = y; }
};