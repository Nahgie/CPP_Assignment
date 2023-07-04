#include "Player.h"

Player::Player(std::string playerName) : AbstractPlayer(playerName) {}

std::string Player::turn() {

	std::string playerEcho;
	
	while (true) { // 가위 , 바위 ,보를 제외한 다른 문자열을 입력했을때 재입력 요구
	
		std::cout << '\n' << this->getName() << " >> ";
		std::getline(std::cin, playerEcho);

		if (playerEcho == "exit" || playerEcho == "Exit" || playerEcho == "EXIT") {

			std::cout << "가위 , 바위 , 보 대결을 마칩니다." << std::endl;
			exit(1);
		}

		else if ((playerEcho == this->gbb[0]) || (playerEcho == this->gbb[1]) || (playerEcho == this->gbb[2])) { break; }
	}
	return playerEcho;
}