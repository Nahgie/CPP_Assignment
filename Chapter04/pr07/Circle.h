#pragma once
class Circle {
private :

	int radius;

public :

	Circle() : Circle(1){}
	Circle(int radius);
	void setRadius(int radius);
	double getArea();

};