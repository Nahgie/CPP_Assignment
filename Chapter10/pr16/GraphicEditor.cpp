#include "GraphicEditor.h"

GraphicEditor::~GraphicEditor() { delete shape; }

void GraphicEditor::addShape() {

	int shapeType = 0;

	std::cout << "선 : ( 1 ) , 원 : ( 2 ) , 사각형 : ( 3 ) >> ";
	std::cin >> shapeType;
	
	switch (shapeType) {
	
	case 1: //선 추가
		
		shape = new Line;
		v.push_back(shape);

		break;

	case 2: //원 추가
		
		shape = new Circle;
		v.push_back(shape);

		break;

	case 3: //사각형 추가

		shape = new Rect;
		v.push_back(shape);

		break;

	default : //예외처리

		std::cout << "\n지원하지 않는 도형입니다.\n" << std::endl;
		break;
	}
}

void GraphicEditor::delShape() {

	int delShapeIndex = 0;

	std::cout << "삭제하고자 하는 도형의 인덱스 >> ";
	std::cin >> delShapeIndex;
	
	if (delShapeIndex < 0 || delShapeIndex > int(v.size()) - 1) { //범위를 넘어선 값이 들어올때를 대비한 예외처리

		std::cout << "입력한 인덱스값에 요소가 없습니다." << std::endl;

	} else {
		
		v.erase(v.begin() + delShapeIndex); //요소 삭제 ( vector의 시작 + 입력한 인덱스 )
	}
}

void GraphicEditor::showALL() { // std::vector <Circle*> v의 원소검색

	for (int srch_idx = 0; srch_idx < v.size(); srch_idx++) {
		
		std::cout << '\n' << srch_idx << " : ";
		v.at(srch_idx)->paint();
	}
	std::cout << std::endl;
}

void GraphicEditor::init() {

	int userMode = 0;
	std::cout << "그래픽 에디터입니다." << std::endl;

	while (true) {

		std::cout << "\n삽입 : ( 1 ) , 삭제 : ( 2 ) , 모두보기 : ( 3 ) , 종료 : ( 4 ) >> ";
		std::cin >> userMode;

		switch (userMode) {
		
		case 1: //도형 추가
			
			addShape();
			break;

		case 2: //도형 삭제

			delShape();
			break;

		case 3: //도형 모두보기

			showALL();
			break;

		case 4: //종료

			exit(1);
			break;

		default : //예외처리

			std::cout << "\n허용하지 않는 조작입니다.\n" << std::endl;
			break;
		}
	}
}