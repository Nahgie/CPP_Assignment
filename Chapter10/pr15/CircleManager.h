#pragma once
#include <vector>
#include <iostream>
#include "Circle.h"

class CircleManager {
private :

	std::vector<Circle*> circles;
	Circle* tmp;

	void showALL();
	void addCircle();
	void delCircle();

public :

	~CircleManager();
	void init();
};