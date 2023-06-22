#pragma once
#include <iostream>

class Color {
private :
	int red, green, blue;
public:
	Color() : Color(0,0,0){}
	Color(int r , int g ,int b){
		this->red = r;
		this->green = g;
		this->blue = b;
	}
	Color(Color& color) {
		this->red = color.red;
		this->green = color.blue;
		this->blue = color.blue;
	}

	/*Color operator + (Color& op) {
		
		Color tmp;
		tmp.red = this->red + op.red;
		tmp.green = this->green + op.green;
		tmp.blue = this->blue + op.blue;

		return tmp;
	}

	bool operator == (Color& op) {
		
		return (this->red == op.red) && (this->green == op.green) && (this->blue == blue) ? true : false;
	}*/
	
	friend Color operator + (Color& base, Color& compare);
	friend bool operator == (Color& base , Color& compare);

	void show() { std::cout << this->red << " " << this->green << " " << this->blue << std::endl; }
};