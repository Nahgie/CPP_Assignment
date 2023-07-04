#pragma once
#include "AbstractPlayer.h"

class Player : public AbstractPlayer {
public :
	Player(std::string playerName);

	std::string turn();
};