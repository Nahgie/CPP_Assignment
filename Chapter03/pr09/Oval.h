#pragma once
class Oval {
private:
	int width = 0, height = 0;

public :
	Oval() : Oval(1,1) {}
	Oval(int w, int h) { width = w, height = h; }
	~Oval();

	inline int getWidth() { return width; }
	inline int getHeight() { return height; }
	inline void set(int w, int h) { width = w; height = h; }

	void show();

};