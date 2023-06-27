#pragma once

class AbstractStack {
public :
	virtual ~AbstractStack() {}
	virtual bool push(int n) = 0;
	virtual bool pop(int& n) = 0;

	virtual int size() = 0;
};