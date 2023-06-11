#pragma once
#include "Circle.h"
#include <string>

class CircleManager {
private :
	
	Circle* p;
	int size = 0;

public :

	CircleManager(int size);
	~CircleManager();
	void setCircle(int index , std::string name , int size);
	void searchByName();
	void searchByArea();
};