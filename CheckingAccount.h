#pragma once
#include <iostream>
using namespace std;

class CheckingAccount
{
public:

	CheckingAccount();
	CheckingAccount(int Balance, double Fee);
	CheckingAccount(string Name,int Balance, double Fee);
	double getFee();
private:
	string name;
	int balance;
	double fee;
};

