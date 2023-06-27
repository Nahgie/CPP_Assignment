#pragma once
#include "Converter.h"

class KmToMile : public Converter {
private :

	double convert(double src) { return src / ratio; }
	std::string getSourceString() { return "Km"; }
	std::string getDestString() { return "Mile"; }

public :
	
	KmToMile(double value) : Converter(value) {}

};