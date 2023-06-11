#pragma once
class Sample {
private :

	int* p;
	int size;

public :

	Sample(int n) { size = n; p = new int[n]; }
	~Sample() { delete[] p; }
	void read();
	void write();
	int big();
};