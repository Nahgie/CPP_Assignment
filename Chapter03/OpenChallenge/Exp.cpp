#include <typeinfo>
#include "Exp.h"

int Exp::getValue() {

	int sum = 1;

	for (int i = 0; i < ExpN; i++) { sum *= base; }

	return sum;

}

bool Exp::equals(Exp b) {
	
	if (typeid(Exp) == typeid(b)) { return true; }
	
	else {	return false;	}

}