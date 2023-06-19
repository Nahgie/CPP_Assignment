#include <iostream>

/*int big(int min, int max) {

	if (min < max && max < 100) { return max; }
	else if (min < max && max > 100) { return 100; }
	else if (min > max && min < 100) { return min; }
	else if (min > max && min > 100) { return 100; }
}*/

int big(int min, int max, int over = 100) {

	if (min < max && max < over) { return max; } 
	else if (min < max && max > over) { return over; } 
	else if (min > max && min < over) { return min; } 
	else if (min > max && min > over) { return over; }
}

int main() {

	int x = big(3, 5);
	int y = big(300, 60);
	int z = big(30, 60, 50);
	std::cout << x << " " << y << " " << z << std::endl;
}