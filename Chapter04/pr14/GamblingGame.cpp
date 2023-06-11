#include "GamblingGame.h"
#include <iostream>
#include <random>

GamblingGame::GamblingGame() {

	std::string tmp_player_name;
	std::cout << "***** 겜블링 게임을 시작합니다. *****" << std::endl;
		
	std::cout << "첫번째 선수 이름>>";
	std::cin >> tmp_player_name;
	CreatePlayerTable(tmp_player_name, 0);

	std::cout << "두번째 선수 이름>>";
	std::cin >> tmp_player_name;
	CreatePlayerTable(tmp_player_name, 1);
}

int GamblingGame::random_value() { // 0 ~ 2 범위의 랜덤값 반환

	std::random_device rd;
	std::mt19937_64 gen(rd());
	std::uniform_int_distribution <> dist(0, 2);

	return dist(gen);
}

void GamblingGame::CreatePlayerTable(std::string player_name, int player_index) {

	(this->player + player_index)->setPlayerName(player_name);
}

int GamblingGame::run() {

	for (int i = 0; i < 2; i++) {
		
		std::string tmp;
	
		std::cout << "\n" << (this->player + i)->getPlayerName() << " : "; //플레이어 이름 출력
		std::getline(std::cin, tmp ,'\n');
		
		int a = random_value(), b = random_value(), c = random_value();

		std::cout << "\n" << a << "\t" << b << "\t" << c << "\t";

		if (a == b && b == c || a == c && c == b) {

			std::cout << (this->player + i)->getPlayerName() << "님의 승리!!" << std::endl; // a,b,c변수가 값이 동일하면 출력

			return 0;

		} else { 
			
			std::cout << "아쉽군요!" << std::endl; //a,b,d 변수의 값이 하나라도 다르면 출력
		
		}
	}
	run(); // 반복문이 끝나면 재귀
}