#pragma once
class Tower {
private :

	int height;

public :

	Tower() : Tower(1){}
	Tower(int h) { height = h; }

	inline int getHeight() { return height; }

};