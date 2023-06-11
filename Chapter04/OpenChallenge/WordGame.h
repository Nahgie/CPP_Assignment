#pragma once
#include <string>
#include "Player.h"

class WordGame {
private:

	Player* player;
	std::string words;
	int players = 0; //최대 플레이어 변수

public :

	WordGame(Player &p, std::string w);
	~WordGame();

	std::string GetWords() { return words; }
	void SetupGame();
	int RunGame();
};