#pragma once
#include "Account.h"
class SavingsAccount : public Account
{
public:
	SavingsAccount();
	SavingsAccount(string currency);
	int getInteresRate();
	void deposit(int deposit);
private:
	double interestRate;
};

