#pragma once
class Accumlator {
private :
	int value;
public :
	Accumlator(int value);
	Accumlator& add(int n);
	int get();
};