#pragma once
#include "Headers.h"

class GraphicEditor {
private :
	
	std::vector<Shape*> v;
	Shape* shape = nullptr;

	void addShape();
	void delShape();
	void showALL();

public :

	~GraphicEditor();
	void init();
};