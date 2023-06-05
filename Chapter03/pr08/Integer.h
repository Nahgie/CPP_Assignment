#pragma once
#include <string>

class Integer {
private:
	int num = 0;

public :
	Integer() : Integer(1) {}
	Integer(int a) { num = a; }
	Integer(std::string a) { num = stoi(a); }

	inline void set(int a) { num = a; }
	inline void set(std::string a) { num = stoi(a); }
	inline int get() { return num; }
	inline int isEven() { return (num % 2 == 0); }

};