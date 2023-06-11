#include "Family.h"
#include <iostream>

Family::Family(std::string name, int size) {

	p = new Person[size];
	p->setName(name);
	this->size = size;
}

Family::~Family() { delete[] p; }

void Family::setName(int size ,std::string name) { (p + size)->setName(name); }

void Family::show() {

	std::cout << "Simpson가족은 다음과 같이 "<< size <<"명 입니다." << std::endl;

	for (int i = 0; i < size; i++) {

		std::cout << (p + i)->getName() << " ";

	}

	std::cout << std::endl;
}

