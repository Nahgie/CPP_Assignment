﻿#include "ColorPoint.h"

int main() {
	ColorPoint zeroPoint;
	zeroPoint.show();

	ColorPoint cp(5, 5, "RED");
	cp.setPoint(10,20);
	cp.setColor("BLUE");
	cp.show();
}