// 17-1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include "myStack.h"

int main()
{
	stackType<int> stack = stackType<int>();

	stack.push(1);
	stack.push(2);
	stack.push(3);

	stackType<int> copy = stackType<int>(stack);

	cout << (stack == copy) << endl;

}