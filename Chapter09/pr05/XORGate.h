#pragma once
#include "AbstractGate.h"

class XORGate : public AbstractGate {
public:
	bool operation() { return this->x ^ this->y; }
};