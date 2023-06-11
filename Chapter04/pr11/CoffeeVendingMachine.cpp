#include "CoffeeVendingMachine.h"
#include <iostream>

void CoffeeVendingMachine::fill() {

	tong[0].fill();
	tong[1].fill();
	tong[2].fill();

}

void CoffeeVendingMachine::selectEspresso() {

	tong[0].consume();
	tong[1].consume();

}

void CoffeeVendingMachine::selectAmericano() {

	tong[0].consume();
	tong[1].consume(2);
}

void CoffeeVendingMachine::selectSugarCoffee() {

	tong[0].consume();
	tong[1].consume(2);
	tong[2].consume();

}

void CoffeeVendingMachine::show() {

	std::cout << " 커피콩 : " << tong[0].getSize() << " 물 : " << tong[1].getSize() << " 설탕 : " << tong[2].getSize() << std::endl;

}

void CoffeeVendingMachine::run() {

	int menu = 0;

	fill();
	std::cout << "***** 커피자판기를 작동합니다. *****" << std::endl;

	while (1) {
		
		if (tong[0].getSize() == 0 || tong[1].getSize() == 0 || tong[2].getSize() == 0) { //커피콩 , 물 , 설탕중 하나라도 모자라면 영업종료

			std::cout << "원료가 부족합니다." << std::endl;
			break;

		}

		std::cout << "메뉴를 눌러주세요 ( 1 : 에스프레소 , 2 : 아메리카노 , 3 : 설탕커피 , 4 : 잔량보기 , 5 : 채우기 ) >>";
		std::cin >> menu;

		switch (menu)
		{
		case 1:
			
			selectEspresso();
			std::cout << "에스프레소 드세요" << std::endl;
			break;

		case 2:

			selectAmericano();
			std::cout << "아메리카노 드세요" << std::endl;
			break;

		case 3:
			
			selectSugarCoffee();
			std::cout << "설탕커피 드세요" << std::endl;
			break;

		case 4:

			show();
			break;

		case 5:

			fill();
			show();
			break;

		default:

			std::cout << "허용되지 않는 조작입니다." << std::endl;
			break;
		}
	}
}