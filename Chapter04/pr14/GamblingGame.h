#pragma once
#include "Player.h"

class GamblingGame {
private :
	
	Player player[2];

	int random_value();
	void CreatePlayerTable(std::string player_name, int player_index);

public :

	GamblingGame();
	int run();
};