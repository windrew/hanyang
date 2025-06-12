#include "account.h"

void deposit(Account* acc, int amount)
{
    acc->balance += amount;
}

int withdraw(Account* acc, int amount) // Returns 1 on success, 0 on failure
{
    if(acc->balance - amount < 0)return 0;
    acc->balance -= amount;
    return 1;
}