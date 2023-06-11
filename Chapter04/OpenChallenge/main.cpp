#include <iostream>
#include "Player.h"
#include "WordGame.h"

int main() {

	Player init_player;
	WordGame g_instance(init_player,"아버지");

	g_instance.SetupGame();

	std::cout << "시작하는 단어는 " << g_instance.GetWords() << "입니다." << std::endl;
	
	g_instance.RunGame();
	
	return 0;
}