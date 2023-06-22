#include "Circle.h"

Circle& operator ++ (Circle& base) {

	++base.radius;

	return base;
}

Circle operator ++ (Circle& base, int back) {

	Circle tmp;
	
	tmp.radius = base.radius++;
	
	return tmp;
}

int main() {

	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();
}