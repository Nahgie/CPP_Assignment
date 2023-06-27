#pragma once
#include "Headers.h"

class GraphicEditor {
private :

	Shape *pStart , *pLast;

	void pushDaShapes(int shapeType);
	void popDaShapes(int index);
	void show();

public :
	
	GraphicEditor() { pStart = pLast = nullptr; }

	void init();
};