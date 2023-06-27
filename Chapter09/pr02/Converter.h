#pragma once
#include <iostream>
class Converter {
protected :
	
	double ratio;
	virtual double convert(double src) = 0;
	virtual std::string getSourceString() = 0;
	virtual std::string getDestString() = 0;

public :

	Converter(double ratio) { this->ratio = ratio; }
	
	void run() {
		double src;
		std::cout << getSourceString() << "을 " << getDestString() << "로 바꿉니다.";
		std::cout << getSourceString() << "을 입력하세요 >> ";
		std::cin >> src;
		std::cout << "반환 결과 : " << convert(src) << getDestString() << std::endl;
	}
};