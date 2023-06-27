#pragma once
#include "Converter.h"

class WonToDollar : public Converter {
protected :

	double convert(double src) { return src / this->ratio; }
	std::string getSourceString() { return "원"; }
	std::string getDestString() { return "달러"; }

public :

	WonToDollar(double value)  : Converter(value){}

};