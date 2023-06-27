#include "PrintManager.h"

void PrintManager::prtSelector() {

	int prtType = 0, prtTimes = 0;

	std::cout << "\n\n프린터 ( 1 : 잉크젯 , 2 : 레이저 )와 매수 입력 >> ";
	std::cin >> prtType >> prtTimes;

	switch (prtType) {

		case 1:	{
		
			inkjetPrinter->print(prtTimes);
			inkjetPrinter->show();
			laserPrinter->show();

			break;

	}	case 2:	{

			laserPrinter->print(prtTimes);
			inkjetPrinter->show();
			laserPrinter->show();

			break;

	} default:	{
		
			std::cout << "지정한 프린터를 찾을 수 없습니다." << std::endl;
			break;
	}}
}

void PrintManager::init() {
	
	char agree{};

	std::cout << "현재 작동중인 2대의 프린터는 아래와 같다." << std::endl;
	inkjetPrinter->show();
	laserPrinter->show();

	while (agree != 'n' && 'N') {
		
		prtSelector();

		std::cout << "\n계속 프린트 하시겠습니까? ( y / n ) >> ";
		std::cin >> agree;
	}
}
