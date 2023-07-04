#pragma once
#include "AbstractPlayer.h"
#include <random>

class Computer : public AbstractPlayer {
private :
	int genSeed();
public :
	Computer(std::string name = "Computer") : AbstractPlayer(name) {}

	std::string turn();
};