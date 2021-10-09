#include "SavingsAccount.h"
SavingsAccount::SavingsAccount(){
interestRate = 0;
	}
SavingsAccount::SavingsAccount(string currency)
{
	if (currency == "euro") {
		interestRate = 1.0;
	}
	else if (currency == "dollar") {
		interestRate = 1.5;
	}
	else if (currency == "tenge") {
		interestRate = 10.0;
	}
}
int SavingsAccount::getInteresRate() {
	return interestRate;
}
void SavingsAccount::deposit(int deposit) {
	cout << "save: " << getbalance()<<endl;
	setbalance(getbalance() + deposit * (1 + interestRate / 100));
	cout << "Save: your balance: " << getbalance()<<endl;
}
