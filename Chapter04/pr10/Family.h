#pragma once
#include "Person.h"

class Family {
private :
	Person* p;
	int size = 0;

public :
	Family(std::string name, int size);
	~Family();
	void setName(int size ,std::string name);
	void show();
};