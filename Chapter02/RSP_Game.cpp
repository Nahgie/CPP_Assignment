#include <iostream>

int main() {

	std::string Romeo;
	std::string Juliet;
	
	std::cout << "가위 바위 보 게임을 합니다. [가위 , 바위 , 보 ] 중에서 입력하세요.\n로미오>>";
	std::cin >> Romeo;
	std::cout << "줄리엣>>";
	std::cin >> Juliet;

	if (Romeo == Juliet) {
		
		std::cout << "비겼습니다." << std::endl;

	} else if (Romeo == "보" && Juliet == "바위" || Romeo == "가위" && Juliet == "보" || Romeo == "바위" && Juliet == "가위") {

		std::cout << "로미오가 이겼습니다." << std::endl;
	
	} else if (Romeo == "보" && Juliet == "가위" || Romeo == "가위" && Juliet == "바위" || Romeo == "바위" && Juliet == "보") {

		std::cout << "줄리엣이 이겼습니다." << std::endl;

	}

	return 0;
}