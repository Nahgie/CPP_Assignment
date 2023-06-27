#pragma once
#include <iostream>
#include <string>

class Shape {
private :
	
	Shape* Shapes;

	virtual void draw() = 0;

public :

	Shape() { Shapes = nullptr; }

	virtual ~Shape() {};

	Shape* add(Shape* shape) {
		
		this->Shapes = shape;
		
		return shape;
	}

	void paint() { draw(); }

	Shape* getForward() { return this->Shapes; }
};