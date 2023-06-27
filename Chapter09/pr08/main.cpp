#include "Headers.h"

int main() {

	Shape* p[3];
	p[0] = new Oval("빈대떡", 10, 20);
	p[1] = new Rect("찰떡", 30, 40);
	p[2] = new Triangular("토스트", 30, 40);

	for (int i = 0; i < 3; i++) {
		std::cout << p[i]->getName() << "넓이는 " << p[i]->getArea() << std::endl;
	}

	for (int i = 0; i < 3; i++) { delete p[i]; }
}