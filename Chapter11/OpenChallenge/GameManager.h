#pragma once
#include "Headers.h"

class GameManager {
private :
	Player* player;
	Computer* computer;

	void compare();
	void entryPlayer();

public :
	GameManager();
	~GameManager();

	void init();
};