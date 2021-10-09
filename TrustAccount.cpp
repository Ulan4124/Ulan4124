#include "TrustAccount.h"
TrustAccount::TrustAccount() {
	name = "default";
	balances = 0;
	interestrate = 0;
}
TrustAccount::TrustAccount(string Name, int Balances, int Interestrate) {
	name = Name;
	Balances = balances;
	interestrate = Interestrate;
}
void TrustAccount::deposit(int deposit,string currency) {
	if (currency == "dollar" && deposit>=1000) {
		account.setbalance(account.getbalance() +deposit+ 10);
		cout << "you get 10$" << endl;
	}
	else if (currency == "euro" && deposit >= 863.90) {
		account.setbalance(account.getbalance() + deposit + 8.64);
		cout << "you get 8.64 euro" << endl;
	}
	else if (currency == "tenge" && deposit >= 425220) {
		account.setbalance(account.getbalance() + deposit + 4252.2);
		cout << "you get 4252.2 tenge" << endl;
	}
	else {
		cout << "your deposit less than 1000"<<endl;
	}
	cout << "Trust: your Balance: " << account.getbalance()<<endl;
}
void TrustAccount::withdraw(int deposit, string currency) {
	if (deposit / account.getbalance() * 100 < 20) {
		account.withdraw(deposit, currency);
		cout << "trust: succesfully withdrawn";
	}
	else {
		cout << "you cannot withdraw more than 20%";
	}
}
