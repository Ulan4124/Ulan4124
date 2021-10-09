#pragma once
#include <iostream>
#include "CheckingAccount.h"
using namespace std;
class Account
{
	
public:
	Account();
	Account(string Name, int Balance);
	void deposit(int Balance,string currency);
	void withdraw(int Withdraw,string currency);

	int getbalance();
	string getname();
	void setbalance(int Balance);
private:
	CheckingAccount CheckingAccount{100,1.5};
	string name;
	double balance;
	int dollar;
	int euro;
	int tenge;
};

