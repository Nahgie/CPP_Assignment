#pragma once
class ArrayUtility {
public:
	static void intToDouble(int source[], double dest[], int size) {

		for (int i = 0; i < size; i++) { dest[i] = (double)source[i]; }

	}

	static void doubleToInt(double source[], int dest[], int size) {

		for (int i = 0; i < size; i++) { dest[i] = (int)source[i]; }

	}
};