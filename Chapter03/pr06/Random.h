#pragma once

class Random {
private:
	int random_value = 0;

public :
	Random();

	int next();
	int nextInRange(int a , int b);

};