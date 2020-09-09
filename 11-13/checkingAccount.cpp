#include "checkingAccount.h"
#include <iostream>

double checkingAccount::getMinimumBalance() const
{
    return minimumBalance;
}

void checkingAccount::setMinimumBalance(double minBalance)
{
	minimumBalance = minBalance;
}

double checkingAccount::getInterestRate() const
{
	return interestRate;
}

void checkingAccount::setInterestRate(double intRate)
{
	interestRate = intRate;
}

double checkingAccount::getServiceCharge() const
{
	return serviceCharge;
}

void checkingAccount::setServiceCharge(double serviceCharge)
{
	this->serviceCharge = serviceCharge;
}

void checkingAccount::postInterest()
{
	balance = balance + (balance * interestRate);
}

bool checkingAccount::verifyMinimumumBalance(double amount)
{
	return amount < minimumBalance;
}

void checkingAccount::writeCheck(double amount)
{
	balance -= amount;
}

void checkingAccount::withdraw(double amount)
{
	if (balance - amount >= minimumBalance)
		balance -= amount;
}

void checkingAccount::print() const
{
	std::cout << "Balance: " << balance << " Interest Rage: " << interestRate << " Service Charge: " << serviceCharge << std::endl;
}

checkingAccount::checkingAccount(int acctNumber, double bal, double minBal, double intRate, double servC)
{
	accountNumber = acctNumber;
	balance = bal;
	minimumBalance = minBal;
	interestRate = intRate;
	serviceCharge = servC;
}