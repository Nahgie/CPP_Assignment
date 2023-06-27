#include "UI.h"

int UI::selMode() {
	
	int modes = 0;

	std::cout << "삽입 : ( 1 ) , 삭제 : ( 2 ) , 모두보기 : ( 3 ) , 종료 : ( 4 ) >> ";
	std::cin >> modes;

	return modes;
}

int UI::selShapes2Ins() {
	
	int shapes_Ins = 0;
	
	std::cout << "선 : ( 1 ) , 원 : ( 2 ) , 사각형 : ( 3 ) >> ";
	std::cin >> shapes_Ins;

	return shapes_Ins;
}

int UI::selShapes2Del() {

	int shapes_del = 0;
	
	std::cout << "삭제하고자 하는 도형의 인덱스 >> ";
	std::cin >> shapes_del;

	return shapes_del;
}