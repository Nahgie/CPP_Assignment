#pragma once
#include <string>
class Account {
private:
	std::string name;
	int id{}, balance{};

public:

	Account() : Account("None" , -1 , -1) {}
	Account(std::string OwnerName , int OwnerId , int OwnerBalance);

	inline std::string getOwner() { return name; }
	inline void deposit(int cash) { balance += cash; }
	inline int withdraw(int cash) { return balance -= cash; }
	inline int inquiry() { return balance; }

};