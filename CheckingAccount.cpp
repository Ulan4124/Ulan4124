#include "CheckingAccount.h"

CheckingAccount::CheckingAccount() {
	name = "default";
	balance=0;
	double fee=1.5;
}
CheckingAccount::CheckingAccount(int Balance, double Fee) {
	balance = Balance;
	fee = Fee;
}
CheckingAccount::CheckingAccount(string Name,int Balance, double Fee) {
	name = Name;
	balance = Balance;
	fee = Fee;
}
double CheckingAccount::getFee() {
	return fee;
}

