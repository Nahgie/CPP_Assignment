#pragma once
#include <iostream>
#include <string>

class Trace {
private :
	static std::string log_data[100][2];
	static int stack_logs;
public :
	static void put(std::string tag, std::string message);
	static void print(std::string tag = "ALL");
};