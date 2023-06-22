#include "Color.h"

Color operator + (Color& base ,Color& compare) {

	Color tmp;

	tmp.red = base.red + compare.red;
	tmp.green = base.green + compare.green;
	tmp.blue = base.blue + compare.blue;

	return tmp;
}

bool operator == (Color& base, Color& compare) {

	return (base.red == compare.red) && (base.green == compare.green) && (base.blue == compare.blue) ? true : false;
}

int main() {

	Color red(255, 0, 0), blue(0, 0, 255), c;
	c = red + blue;
	c.show();

	Color fuchsia(255, 0, 255);

	if (c == fuchsia) { std::cout << "보라색 맞음" << std::endl; }

	else { std::cout << "보라색 아님" << std::endl; }
}