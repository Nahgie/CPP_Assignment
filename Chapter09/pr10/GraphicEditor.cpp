#include "GraphicEditor.h"

void GraphicEditor::pushDaShapes(int shapeType) {

	Shape* shape = nullptr;

	switch (shapeType) {

	case 1:{

		shape = new Line;
		break;
	
	} case 2:{
	
		shape = new Circle;
		break;
	
	} case 3:{
		
		shape = new Rect;
		break;
	
	} default: {

		std::cout << "해당 도형을 찾을 수 없습니다." << std::endl;
		break;
	}}

	if (this->pStart == nullptr) {

		this->pStart = shape;
		this->pLast = shape;

	} else {

		this->pLast->add(shape);
		this->pLast = pLast->getForward();
	}

}

void GraphicEditor::popDaShapes(int index) {
	
	Shape *preload, *tmp; 
	preload = tmp = this->pStart;

	if (this->pStart == nullptr) {

		std::cout << "도형이 없습니다." << std::endl;
	
	} else {

		for (int srch_idx = 0; srch_idx < index; srch_idx++) {
		
			preload = tmp;
			tmp = tmp->getForward();
		
		}

		if (tmp == this->pStart) {
		
			this->pStart = tmp->getForward();
			delete tmp;
		
		} else {

			preload->add(tmp->getForward());
			delete tmp;

		}
	}
}

void GraphicEditor::show() {

	Shape* tmp = this->pStart;
	
	int index = 0;
	
	while (tmp != nullptr) {

		std::cout << index++ << " : ";
		tmp->paint();
		tmp = tmp->getForward();
	}
}


void GraphicEditor::init() {

	std::cout << "\n그래픽 에디터입니다.\n" << std::endl;
	
	int mode = 0;

	while (mode != 4) {
		
		mode = UI::selMode();

		switch (mode) {

		case 1:{

			pushDaShapes(UI::selShapes2Ins());
			break;
		
		} case 2:{

			popDaShapes(UI::selShapes2Del());
			break;
		
		} case 3:{
			this->show();
			break;
		
		} default:{

			std::cout << "허용하지 않는 동작입니다." << std::endl;
			break;

		}}
	}
}