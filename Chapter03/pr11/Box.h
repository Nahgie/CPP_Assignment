#pragma once
class Box {
private:
	
	int width = 0, height = 0;
	char fill{};

public:

	Box(int w, int h);
	void setFill(char f);
	void setSize(int w, int h);
	void draw();

};