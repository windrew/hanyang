#ifndef BANK_H
#define BANK_H
#include "account.h"

typedef struct {
    Account* accounts;
    int count;
    int capacity;
} Bank;

void initBank(Bank* bank);

void addAccount(Bank* bank, const char* name, int initialBalance);

Account* findAccount(Bank* bank, const char* name);

void printAllAccounts(const Bank* bank);

void freeBank(Bank* bank);

#endif