#include "PrintManager.h"

PrintManager::PrintManager() {
	firstPrinter = new Inkjet;
	secondPrinter = new Laser;
}

PrintManager::~PrintManager() {
	delete firstPrinter;
	delete secondPrinter;
}

void PrintManager::init() {
	
	std::cout << "현재 작동중인 2대의 프린터는 아래와 같다.\n" << std::endl;

	std::cout << "잉크젯 : " << firstPrinter->getMODEL() << " , " << firstPrinter->getMFTR() << " , 남은 종이 " << firstPrinter->leftPapers() << "장 , 남은 잉크 " << firstPrinter->availableInk() << std::endl;
	std::cout << "레이저 : " << secondPrinter->getMODEL() << " , " << secondPrinter->getMFTR() << " , 남은 종이 " << secondPrinter->leftPapers() << "장 , 남은 토너 " << secondPrinter->availableToner() << '\n' << std::endl;
	
	int SEL_Printer = 0, Papers = 0;	
	char agree{};

	while (agree != 'n' && 'N') {

		std::cout << "\n프린터( 1 : 잉크젯 , 2 : 레이저)와 매수 입력>>";	std::cin >> SEL_Printer >> Papers;

		switch (SEL_Printer) {
		
		case 1:
			
			firstPrinter->printInkJet(Papers);
			break;

		case 2:

			secondPrinter->printLaser(Papers);
			break;

		default :

			std::cout << "지정한 프린터를 찾을 수 없습니다." << std::endl;
			break;
		
		}
		std::cout << "\n잉크젯 : " << firstPrinter->getMODEL() << " , " << firstPrinter->getMFTR() << " , 남은 종이 " << firstPrinter->leftPapers() << "장 , 남은 잉크 " << firstPrinter->availableInk() << std::endl;
		std::cout << "레이저 : " << secondPrinter->getMODEL() << " , " << secondPrinter->getMFTR() << " , 남은 종이 " << secondPrinter->leftPapers() << "장 , 남은 토너 " << secondPrinter->availableToner() << '\n' << std::endl;
		std::cout << "계속 프린트 하시겠습니까( y / n )";	std::cin >> agree;
	}
}