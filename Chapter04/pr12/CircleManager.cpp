#include "CIrcleManager.h"
#include <iostream>

CircleManager::CircleManager(int size) {

	p = new Circle[size];
	p->setCircle("Unknown", size);
	this->size = size;
}

CircleManager::~CircleManager() { delete[] p; }

void CircleManager::setCircle(int index, std::string name, int size) { (p + index)->setCircle(name, size); }

void CircleManager::searchByName() {

	std::string s_name;

	std::cout << "검색하고자 하는 원의 이름 >>";
	std::cin >> s_name;

	for (int i = 0; i < size; i++) {
		if (p[i].getName() == s_name) {

			std::cout << p[i].getName() << " 의 면적은 " << p[i].getArea() << std::endl;

		}
	}

}

void CircleManager::searchByArea() {

	int s_area;

	std::cout << "최소 면적을 정수로 입력하세요 >>";
	std::cin >> s_area;

	std::cout << s_area << "보다 큰 원을 검색합니다." << std::endl;

	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > s_area) {

			std::cout << p[i].getName() << "의 면적은 " << p[i].getArea() << " , ";

		}
	}

}