#include <iostream>

std::istream& pos(std::istream& in) {

	std::cout << "위치는 ? ";
	return in;

}

int main() {

	int x, y;

	std::cin >> pos >> x;
	std::cin >> pos >> y;

	std::cout << x << ',' << y << std::endl;
}