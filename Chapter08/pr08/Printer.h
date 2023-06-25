#pragma once
#include <iostream>

class Printer {
private :
	
	std::string model , manufacturer; //모델명 , 제조사
	int printedCount, availableCount; // 인쇄 매수 , 종이 잔량

public :
	
	Printer(std::string mdl, std::string mfr, int avablCnt);

	void print(int pages);
	int leftPapers();
	std::string getMODEL() { return this->model; }
	std::string getMFTR() { return this->manufacturer; }
};