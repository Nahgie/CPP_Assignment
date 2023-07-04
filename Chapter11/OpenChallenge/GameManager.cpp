#include "GameManager.h"

GameManager::GameManager() {

	player = nullptr;
	computer = new Computer;
}

GameManager::~GameManager() { //메모리 해제
	
	delete player;
	delete computer;
}

void GameManager::entryPlayer() { //플레이어 이름 지정

	std::string PlayerName;

	std::cout << "선수 이름을 입력하세요 >> ";
	std::getline(std::cin, PlayerName);

	player = new Player(PlayerName);
}

void GameManager::compare() { //컴퓨터와 플레이어의 답안을 비교

	std::string computerAnswer = computer->turn();
	std::string playerAnswer = player->turn();

	std::cout << "Computer : " << computerAnswer << std::endl;

	if (computerAnswer == playerAnswer) {

		std::cout << "\nthe same\n" << std::endl; //답안이 동일할 경우

	} else if (computerAnswer == "바위" && playerAnswer == "가위" || computerAnswer == "가위" && playerAnswer == "보" || computerAnswer == "보" && playerAnswer == "바위") {

		std::cout << "\nComputer is Winner.\n" << std::endl; //컴퓨터
	
	} else if (playerAnswer == "바위" && computerAnswer == "가위" || playerAnswer == "가위" && computerAnswer == "보" || playerAnswer == "보" && computerAnswer == "바위") {

		std::cout << "\n" << player->getName() << " is Winner.\n" << std::endl; //플레이어
	}
}

void GameManager::init() {

	std::string PlayerName;

	std::cout << "***** 컴퓨터와 사람이 가위 바위 보 대결을 펼칩니다. *****\n" << std::endl;
	entryPlayer();

	while (true) { compare(); }
}