#include "Circle.h"

std::istream& operator >> (std::istream& in, Circle& circle) {

	std::cout << "반지름 >> ";
	in >> circle.radius;
	std::cout << "이름 >> ";
	in >> circle.name;
	
	return in;
}

std::ostream& operator << (std::ostream& out, Circle circle) {
	
	out << "(반지름 " << circle.radius << "인 " << circle.name << ")";
	return out;
}

int main() {

	Circle d, w;
	std::cin >> d >> w;
	std::cout << d << w << std::endl;
}