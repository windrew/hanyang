#ifndef ACCOUNT_H
#define ACCOUNT_H

typedef struct {
    char name[21]; // Up to 20 characters + null terminator
    int balance;
} Account;

void deposit(Account* acc, int amount);

int withdraw(Account* acc, int amount); // Returns 1 on success, 0 on failure

#endif