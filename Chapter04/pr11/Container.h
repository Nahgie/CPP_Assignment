#pragma once
class Container {
private : 
	
	int size;

public :
	
	Container() { size = 10; }
	void fill();
	void consume();
	void consume(int d_size);
	int getSize();
};