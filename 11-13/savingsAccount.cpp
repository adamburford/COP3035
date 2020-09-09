#include "savingsAccount.h"
#include <iostream>

double savingsAccount::getInterestRate() const
{
	return interestRate;
}

void savingsAccount::setInterestRate(double rate)
{
	interestRate = rate;
}

void savingsAccount::withdraw(double amount)
{
	balance -= amount;
}

void savingsAccount::postInterest()
{
	balance = balance + (balance * interestRate);
}

void savingsAccount::print() const
{
	std::cout << "Balance: " << balance << " Interest Rate: " << interestRate << std::endl;
}

savingsAccount::savingsAccount(int acctNumber, double bal, double intRate)
{
	accountNumber = acctNumber;
	balance = bal;
	interestRate = intRate;
}