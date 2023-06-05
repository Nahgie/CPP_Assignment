#include <iostream>
#include "Tower.h"

int main() {

	Tower myTower;
	Tower seoulTower(100);

	std::cout << myTower.getHeight() << "미터" << std::endl;
	std::cout << seoulTower.getHeight() << "미터" << std::endl;

	return 0;
}