#pragma once
#include "AbstractGate.h"

class ANDGate : public AbstractGate {
public :
	bool operation() { return this->x && this->y; }
};