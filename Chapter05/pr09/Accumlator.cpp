#include "Accumlator.h"

Accumlator::Accumlator(int value) {

	this->value = value;
}

Accumlator& Accumlator::add(int n) {
 
	this->value += n;
	return *this;
}

int Accumlator::get() {

	return this->value;
}