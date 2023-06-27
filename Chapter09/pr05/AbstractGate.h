#pragma once
class AbstractGate {
protected :
	bool x, y;
public :
	void set(bool x, bool y) { this->x = x, this->y = y; }
	virtual bool operation() = 0;
};