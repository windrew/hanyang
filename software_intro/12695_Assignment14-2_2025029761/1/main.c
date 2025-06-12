#include <stdio.h>
#include "bank.h"
#include "io.h"

const char menu[155] = "=== Bank Menu ===\n1. Create Account\n2. Deposit\n3. Withdraw\n4. Search Account\n5. Print All Accounts\n6. Exit\n> ";
const char name[155] = "Enter name: ";
const char balance[155] = "Enter initial balance: ";
const char amount[155] = "Enter amount: ";

int main()
{
    Bank* bank;
    initBank(bank);
    while(1)
    {
        int opt = getInt(menu);
        if(opt == 1)
        {
            int b;
            char n[21];
            getString(n,21,name);
            b = getInt(balance);
            addAccount(bank,n,b);
            printf("Account created.\n\n");
        }
        else if(opt == 2)
        {
            int b;
            char n[21];
            getString(n,21,name);
            b = getInt(amount);
            Account* now = findAccount(bank,n);
            deposit(now,b);
            printf("Deposit successful.\n\n");
        }
        else if(opt == 3)
        {
            int b;
            char n[21];
            getString(n,21,name);
            b = getInt(amount);
            Account* now = findAccount(bank,n);
            if(withdraw(now,b))printf("Withdraw successful.\n\n");
            else printf("Withdraw fail.\n\n");
        }
        else if(opt == 4)
        {
            char n[21];
            getString(n,21,name);
            Account* now = findAccount(bank,n);
            if(now->name[0] != '\0')printAccount(now);
            else printf("There's no %s's account\n",n);
            printf("\n");
        }
        else if(opt == 5)
        {
            printAllAccounts(bank);
            printf("\n");
        }
        else
        {
            printf("Exiting...");
            break;
        }
    }
    freeBank(bank);
}