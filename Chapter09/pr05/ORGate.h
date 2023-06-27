#pragma once
#include "AbstractGate.h"

class ORGate : public AbstractGate {
public :
	bool operation() { return this->x || this->y; }
};