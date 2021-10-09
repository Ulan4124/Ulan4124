#include "Account.h"
Account::Account() {
	name = "Unnamed Account";
	balance = 0;
}
Account::Account(string Name, int Balance) {
	name = Name;
	balance = Balance;
}

void Account::deposit(int Balance,string currency) {
	if (currency == "dollar") {
		balance = balance + Balance;
	}
	else if (currency == "euro") {
		balance = balance + Balance*1.16;
	}
	else if (currency == "tenge") {
		balance = balance + Balance * 0.0024;
	}
	cout << "Balance: " << balance <<"$" << endl;
}
void Account::withdraw(int Withdraw,string currency) {
	if (currency == "euro") {
		Withdraw = Withdraw * 1.16;
	}
	else if (currency == "tenge") {
		Withdraw = Withdraw * 0.0024;
	}
	if (balance - Withdraw * (1 + CheckingAccount.getFee()/100) < 0) {
		cout << "not enough money"<<endl;
	}
	else {
		balance = balance - Withdraw* (1 + CheckingAccount.getFee() / 100);
		cout << "you have successfully withdrawn"<<endl;
		cout << "your balance: " << balance<<endl;
	}
}
int Account::getbalance()
{
	return balance;
}
void  Account::setbalance(int Balance)
{
	balance = Balance;
}
string Account::getname()
{
	return name;
}
