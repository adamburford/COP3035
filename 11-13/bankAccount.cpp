#include "bankAccount.h"
#include <iostream>

void bankAccount::setAccountNumber(int acct)
{
	accountNumber = acct;
}

int bankAccount::getAccountNumber() const
{
	return accountNumber;
}

double bankAccount::getBalance() const
{
	return balance;
}

void bankAccount::withdraw(double amount)
{
	balance -= amount;
}

void bankAccount::deposit(double amount)
{
	balance += amount;
}

void bankAccount::print() const
{
	std::cout << "Balance: " << balance << std::endl;
}

bankAccount::bankAccount(int acctNumber, double bal)
{
	accountNumber = acctNumber;
	balance = bal;
}