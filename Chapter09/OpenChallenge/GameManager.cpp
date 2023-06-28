#include "GameManager.h"

GameManager::GameManager() { //오브젝트 동적으로 할당
	
	Player = new Human(0, 0);
	Enemy = new Monster(5, 5);
	Item = new Food(9, 9);
	initField();
}

GameManager::~GameManager() { //메모리 해제

	delete Player;
	delete Enemy;
	delete Item;
}

int GameManager::rDirection() { //방향 랜덤시드 생성

	std::random_device rd;
	std::mt19937_64 mt(rd());
	std::uniform_int_distribution<> dist(1,4);

	return dist(mt);
}

void GameManager::setObjLocation(GameObject *OBJ , int mode) { //오브젝트 이동

	switch (mode) {

	case 1: // 왼쪽

		if (!(OBJ->getY() - OBJ->getDistance() + 1<= 0)) { // 오브젝트가 Y축의 최소까지 도달했는지 체크

			OBJ->move(OBJ->getX(), OBJ->getY() - OBJ->getDistance());
		}
		break;
	
	case 2: // 아랫쪽

		if (!(OBJ->getX() + OBJ->getDistance() - 1>= 9)) { // 오브젝트가 X축의 최대까지 도달했는지 체크

			OBJ->move(OBJ->getX() + OBJ->getDistance(), OBJ->getY());
		}
		break;
	
	case 3: // 위쪽

		if (!(OBJ->getX() - OBJ->getDistance() + 1<= 0)) { // 오브젝트가 X축의 최소까지 도달했는지 체크

			OBJ->move(OBJ->getX() - OBJ->getDistance(), OBJ->getY());
		}		
		break;
	
	case 4: // 오른쪽

		if (!(OBJ->getY() + OBJ->getDistance() - 1 >= 19)) { // 오브젝트가 Y축의 최대까지 도달했는지 체크

			OBJ->move(OBJ->getX(), OBJ->getY() + OBJ->getDistance());
		}
		break;
	}
}

void GameManager::initField() { //필드 생성

	for (int init_row = 0; init_row < 10; init_row++) { // 10 x 20 그리드의 행(10)

		for (int init_column = 0; init_column < 20; init_column++) { //10 x 20 그리드의 열(20)

			field[init_row][init_column] = '-'; //10 x 20 크기의 배열에 순차삽입
		}
	}

	field[Player->getX()][Player->getY()] = Player->getShape(); // Player의 위치
	field[Enemy->getX()][Enemy->getY()] = Enemy->getShape(); //Enemy의 위치
	field[Item->getX()][Item->getY()] = Item->getShape(); //Food의 위치
}

void GameManager::refreshField() { //필드 새로고침

	for (int refresh_row = 0; refresh_row < 10; refresh_row++) { // 10 x 20 그리드의 행 (10)

		for (int refresh_column = 0; refresh_column < 20; refresh_column++) { // 10 x 20 그리드의 열 (20)
		
			std::cout << field[refresh_row][refresh_column]; //10 x 20 크기의 배열에 담겨있는 값을 순차출력
		}
		std::cout << std::endl;
	}
}

bool GameManager::itemDelay(int branch, int times) { //아이템 이동 제어

	static int counter = 0;

	if (counter >= times) {
	
		counter = 0;

	} else if (counter >= branch) {

		counter++;
		return true;
	}

	counter++;
	return false;
}

void GameManager::playerControl() { //플레이어 이동

	char move_command{};

	std::cout << "왼쪽 ( a ) , 아래 ( s ) , 위 ( w ) , 오른쪽 ( d ) >> ";
	std::cin >> move_command;

	if (move_command == 'a' && 'A') { // a입력 시
		
		setObjLocation(Player, 1);
		setObjLocation(Enemy , rDirection());

		if (itemDelay(3, 5)) { setObjLocation(Item , rDirection()); }

	} else if (move_command == 's' && 'S') { // s입력 시
		
		setObjLocation(Player, 2);
		setObjLocation(Enemy , rDirection());

		if (itemDelay(3, 5)) { setObjLocation(Item , rDirection()); }

	} else if (move_command == 'w' && 'W') { // w입력 시
		
		setObjLocation(Player, 3);
		setObjLocation(Enemy, rDirection());

		if (itemDelay(3, 5)) { setObjLocation(Item , rDirection()); }

	} else if (move_command == 'd' && 'D') { // d입력 시

		setObjLocation(Player, 4);
		setObjLocation(Enemy , rDirection());

		if (itemDelay(3,5)) { setObjLocation(Item , rDirection()); }
	
	}
	std::cout << std::endl;
}

void GameManager::init() { //게임 시작

	std::cout << "** Human의 Food 먹기 게임을 시작합니다. **\n" << std::endl;

	while (true) {
		
		if (Player->collide(Item)) { //Food와 Human의 충돌처리

			Item->setShape(Player->getShape()); //Human의 심볼을 오버랩 처리
			
			initField();
			refreshField();
			
			std::cout << "\n인간이 이겼습니다." << std::endl;
			break;
		
		} else if (Enemy->collide(Player)) { // Enemy와 Human의 충돌처리

			initField();
			refreshField();

			std::cout << "\n괴물이 이겼습니다." << std::endl;
			break;

		} else if (Enemy->collide(Item)) { // Enemy와 Food의 충돌처리

			initField();
			refreshField();

			std::cout << "\n괴물이 음식을 먹었습니다." << std::endl;
			break;

		} else {

			initField();
			refreshField();
			playerControl();

			system("cls"); //콘솔창 초기화
		}
	}
}