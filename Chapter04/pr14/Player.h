#pragma once
#include <string>

class Player {
private :

	std::string player_name;

public :
	
	Player() : Player("Guest") {}
	Player(std::string player_name) { this->player_name = player_name; }

	std::string getPlayerName() { return player_name; }
	void setPlayerName(std::string player_name) { this->player_name = player_name; }
};