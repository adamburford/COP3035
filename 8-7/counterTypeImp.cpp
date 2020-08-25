#include "counterType.h"
#include <iostream>

counterType::counterType()
{
	counter = 0;
}

counterType::counterType(int counter)
{
	this->counter = counter;
}

void counterType::setCounter()
{
	counter = counter;
}

int counterType::getCounter()
{
	return counter;
}

void counterType::setCounter(int counter)
{
	this->counter = counter;
}

void counterType::incrementCounter()
{
	counter++;
}

void counterType::decrementCounter()
{
	counter--;
}

void counterType::print()
{
	std::cout << "Counter = " << counter << std::endl;
}