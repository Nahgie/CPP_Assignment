#include "CoffeeMachine.h"

CoffeeMachine::CoffeeMachine() { //동적 메모리 할당

	cbean = new CoffeeBean;
	csugar = new Sugar;
	ccream = new Cream;
	cwater = new Water;
	ccup = new Cup;
}

CoffeeMachine::~CoffeeMachine() { //동적 메모리 해제
	
	delete cbean;
	delete csugar;
	delete ccream;
	delete cwater;
	delete ccup;
}

void CoffeeMachine::reFill() { //재료 채우기

	cbean->setStock(3);
	csugar->setStock(3);
	ccream->setStock(3);
	cwater->setStock(3);
	ccup->setStock(3);

	show();
}

void CoffeeMachine::brewCoffee(int CoffeeType) {

	switch (CoffeeType) {

	case 0: //보통커피

		cbean->minusStock(1);
		ccream->minusStock(1);
		cwater->minusStock(1);
		ccup->minusStock(1);

		show();
		break;

	case 1: //설탕커피

		cbean->minusStock(1);
		csugar->minusStock(1);
		cwater->minusStock(1);
		ccup->minusStock(1);

		show();
		break;

	case 2: //블랙커피

		cbean->minusStock(1);
		cwater->minusStock(1);
		ccup->minusStock(1);

		show();
		break;

	default :

		std::cout << "커피를 내릴수 없습니다." << std::endl;
		break;
	}

}

void CoffeeMachine::show() { //재료 현황

	cbean->getStockHis(cbean->getStock());
	csugar->getStockHis(csugar->getStock());
	ccream->getStockHis(ccream->getStock());
	cwater->getStockHis(cwater->getStock());
	ccup->getStockHis(ccup->getStock());
}

void CoffeeMachine::controlPanel() {

	int userMode = 0;

	std::cout << "\n보통 커피 : ( 0 ) , 설탕 커피 : ( 1 ) , 블랙 커피 : ( 2 ) , 채우기 : ( 3 ) , 종료 : ( 4 ) >> ";
	std::cin >> userMode;

	switch (userMode) {

		case 0:
		
			std::cout << "맛있는 보통 커피 나왔습니다~~\n" << std::endl;
		
			brewCoffee(0);
			break;

		case 1:

			std::cout << "맛있는 설탕 커피 나왔습니다~~\n" << std::endl;

			brewCoffee(1);
			break;

		case 2:

			std::cout << "맛있는 블랙 커피 나왔습니다~~\n" << std::endl;

			brewCoffee(2);
			break;

		case 3:
		
			reFill();
			break;

		case 4:

			std::cout << "판매를 종료합니다." << std::endl;

			exit(1);
			break;

		default :

			std::cout << "허용된 동작이 아닙니다." << std::endl;
			break;
	}
}

void CoffeeMachine::init() {

	std::cout << "------ 명품 커피 자판기켭니다. ------" << std::endl;

	show();

	while (true) { controlPanel(); }
}