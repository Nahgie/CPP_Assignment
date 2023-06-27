#include "WhileLoopAdder.h"
#include "DoWhileLoopAdder.h"

int main() {

	WhileLoopAdder whileLoop("While Loop");
	DoWhileLoopAdder doWhileLoop("Do While Loop");

	whileLoop.run();
	doWhileLoop.run();
}