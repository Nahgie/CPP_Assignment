﻿#include <iostream>

extern "C" { void printline(int count); }

int main() {
	
	printline(1);
	printline(2);
	printline(3);
}