#pragma once
#include <iostream>

class Person {
private :
	int id;
	double weight;
	std::string name;
public :
	Person() : Person( 1 , "Grace", 20.5) {}
	Person(int id, std::string name, double weight = 20.5) {
		this->id = id;
		this->name = name;
		this->weight = weight;
	}
	void show() { std::cout << id << " " << weight << " " << name << std::endl; }
};