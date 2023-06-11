#include "Container.h"

void Container::fill() {
	size = 10;
}

void Container::consume() {
	size--;
}

void Container::consume(int d_size) {
	size -= d_size;
}

int Container::getSize() {
	return size;
}