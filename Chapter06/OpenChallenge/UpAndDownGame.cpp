#include "UpAndDownGame.h"

int UpAndDownGame::target_num = 0 , UpAndDownGame::min_range = 0 ,UpAndDownGame::max_range = 99; //static 변수 초기화

void UpAndDownGame::run() {

	Person player[2]{ {"김인수"} , {"오은경"} };

	//랜덤값 생성
	std::random_device rd;
	std::mt19937_64 mt64(rd());
	std::uniform_int_distribution<> dist(min_range, max_range);
	target_num = dist(rd);

	std::cout << "Up & Down 게임을 시작합니다.\n답은" << min_range << " 과 " << max_range << " 사이에 있습니다." << std::endl;
	
	int input_num = -1 , counter = 0;
	
	while (target_num != input_num) { // 정답과 입력이 동일하면 while() 종료

		std::cout << player[counter % 2].getName() << ">>";
		std::cin >> input_num;

		if (target_num > input_num) { min_range = input_num; }
		else if (target_num < input_num) { max_range = input_num; }
		else { break; }

		std::cout << "답은" << min_range << " 과(와) " << max_range << " 사이에 있습니다." << std::endl;

		counter++;
	}
	std::cout << player[counter % 2].getName() << "가 이겼습니다!!" << std::endl;
}