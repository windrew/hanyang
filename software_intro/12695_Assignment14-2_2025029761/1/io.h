#ifndef IO_H
#define IO_H
#include "account.h"

void getString(char* buf, int size, const char* prompt);

int getInt(const char* prompt);

void printAccount(const Account* acc);

#endif