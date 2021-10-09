#include "Account.h"
#include "SavingsAccount.h"
#include "TrustAccount.h"
int main()
{
    Account Account1("ulan", 100);
    Account1.deposit(100,"euro");
    Account1.withdraw(100, "euro");
    TrustAccount trust("aygerim", 100, 1);
    trust.deposit(1001, "dollar");
    trust.withdraw(1, "dollar");
}
