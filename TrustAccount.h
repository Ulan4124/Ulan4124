#pragma once
#include "Account.h"
class TrustAccount
{
public:
	TrustAccount();
	TrustAccount(string Name, int Balances, int Interestrate);
	void deposit(int deposit,string currency);
	void withdraw(int deposit, string currency);
private:
	Account account;
	string name;
	int balances;
	int interestrate;
};

