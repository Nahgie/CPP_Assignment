#include "Computer.h"

std::string AbstractPlayer::gbb[3];

int Computer::genSeed() {

	std::random_device rd;
	std::mt19937_64 mt(rd());
	std::uniform_int_distribution<> dist(0, 2);

	return dist(mt);
}

std::string Computer::turn() { return gbb[genSeed()]; }