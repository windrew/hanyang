#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bank.h"
#include "io.h"

void initBank(Bank* bank)
{
    bank->accounts = (Account*) malloc(bank->capacity);
}

void addAccount(Bank* bank, const char* name, int initialBalance)
{
    int i;
    Bank rbank;
    rbank.count = bank->count;
    rbank.capacity = bank->capacity;
    rbank.accounts = (Account*) malloc(bank->count*sizeof(Account));
    for(i=0;i<bank->count;i++)
    {
        strcpy(rbank.accounts[i].name,bank->accounts[i].name);
        rbank.accounts[i].balance = bank->accounts[i].balance;
    }
    free(bank->accounts);
    bank->count = rbank.count + 1;
    bank->capacity += rbank.capacity + sizeof(Account);
    bank->accounts = (Account*) malloc(bank->count*sizeof(Account));
    for(i=0;i<rbank.count;i++)
    {
        strcpy(bank->accounts[i].name,rbank.accounts[i].name);
        bank->accounts[i].balance = rbank.accounts[i].balance;
    }
    strcpy(bank->accounts[bank->count-1].name,name);
    bank->accounts[bank->count-1].balance = initialBalance;
    free(rbank.accounts);
}

Account* findAccount(Bank* bank, const char* name)
{
    int i;
    for(i=0;i<bank->count;i++)
    {
        if(strcmp(bank->accounts[i].name,name) == 0)break;
    }
    if(i==bank->count)
    {
        Account* ret;
        ret->name[0] = '\0';
        return ret;
    }
    return bank->accounts+i;
}

void printAllAccounts(const Bank* bank)
{
    int i;
    for(i=0;i<bank->count;i++)
    {
        printAccount(bank->accounts+i);
    }
}

void freeBank(Bank* bank)
{
    free(bank->accounts);
}
