// 17-5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include "myStack.h"
#include <string>

bool isGroupingSymbol(char c)
{
	if (c == '{' || c == '}' || c == '(' || c == ')' || c == '[' || c == ']' || c == '<' || c == '>')
		return true;
	
	return false;
}

bool isCloseSymbol(char c)
{
	if (c == '}' || c == ')' || c == ']' || c == '>')
		return true;

	return false;
}

bool isOpenSymbol(char c)
{
	if (c == '{' || c == '(' || c == '[' || c == '<')
		return true;

	return false;
}

// Takes a list of grouping symbols, returns true if they match
// (((3 + 4) / {{999.7} - 9}));
bool symbolsMatch(stackType<char> s, int size = 0)
{
	if (size & 1)
		return false;

	stackType<char> close = stackType<char>();

	while (!s.isEmptyStack())
	{
		char t = s.top();
		s.pop();
		if (isCloseSymbol(t))
			close.push(t);
		else
		{
			if (close.isEmptyStack())
				return false;

			char lastClose = close.top();
			if (t == '{' && lastClose != '}' || t == '[' && lastClose != ']' || t == '(' && lastClose != ')' || t == '<' && lastClose != '>')
				return false;
			else
				close.pop();
		}
	}

	if (!close.isEmptyStack())
		return false;

	return true;
}

int main()
{
	string input;
	getline(cin, input);

	stackType<char> symbols = stackType<char>();

	int size = 0;

	for (auto &c : input)
	{
		if (isGroupingSymbol(c))
		{
			symbols.push(c);
			size++;
		}
	}

	if (symbolsMatch(symbols, size))
		cout << "Expression has matching grouping symbol" << endl;
	else
		cout << "Expression does not have matching grouping symbols." << endl;

	return 0;
}