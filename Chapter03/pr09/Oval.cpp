#include <iostream>
#include "Oval.h"

Oval::~Oval() {

	std::cout << "Oval 소멸 : " << "width = " << width << "," << "height = " << height << std::endl;

}

void Oval::show() {

	std::cout << "width = " << width << "," << "height = " << height << std::endl;

}