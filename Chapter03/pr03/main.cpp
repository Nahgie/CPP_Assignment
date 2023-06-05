#include <iostream>
#include "Account.h"

int main() {

	Account a("Kitae", 1, 5000);
	a.deposit(50000);

	std::cout << a.getOwner() << "의 잔액은" << a.inquiry() << std::endl;

	int money = a.withdraw(20000);
	std::cout << a.getOwner() << "의 잔액은" << a.inquiry() << std::endl;

	return 0;
}