#pragma once
#include "Comparable.h"

class Circle : public Comparable{
private :

	int radius;

public :

	Circle(int radius = 1) { this->radius = radius; }
	int getRadius() { return this->radius; }

	bool operator > (Comparable& op2) override {

		Circle *temp = (Circle*)&op2; //다운 캐스트
		return (this->getRadius() > temp->getRadius()) ? true : false;
	}

	bool operator < (Comparable& op2) override {

		Circle *temp = (Circle*)&op2;//다운 캐스트
		return (this->getRadius() < temp->getRadius()) ? true : false;
	}

	bool operator == (Comparable& op2) override {

		Circle *temp = (Circle*)&op2;//다운 캐스트
		return (this->getRadius() == temp->getRadius()) ? true : false;
	}
};