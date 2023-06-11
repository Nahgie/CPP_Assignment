#include <iostream>
#include "WordGame.h"

WordGame::WordGame(Player &p, std::string w) { player = &p; words = w; }
WordGame::~WordGame() { delete[] player; }

void WordGame::SetupGame() {

	std::cout << "끝말 잇기 게임을 시작합니다. \n게임에 참가하는 인원은 몇명입니까 ? ";
	std::cin >> players;

	player = new Player[players];

	for (int i = 0; i < players; i++) {

		std::string player_name;

		std::cout << "참가자의 이름을 입력하세요. 빈칸없이>>";
		std::cin >> player_name;

		player[i].SetPlayerName(player_name);
	}
}


int WordGame::RunGame() {

	static std::string tmp_words = words;

	for (int i = 0;i < players;i++) {

		std::cout << player[i].GetPlayerName() << ">>";
		std::cin >> words;

		if (words.at(0) == tmp_words.at(tmp_words.size() - 2) && words.at(1) == tmp_words.at(tmp_words.size() - 1)) { //한글은 2바이트 사용
			
			if (i == players) { i = 0; }

			else { tmp_words = words; }

		} else {

			std::cout << player[i].GetPlayerName() <<" 님이 패배했습니다." << std::endl;
			return 0;
		}
	}
	RunGame(); //플레이어 수 만큼 입력 받으면 재귀
}