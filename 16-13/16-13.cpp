// 16-13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include "circularLinkedList.h"

int main()
{
	circularLinkedList<int> list = circularLinkedList<int>();

	cout << "Enter a list of positive integers ending with -999: ";

	int input = 0;

	while (true)
	{
		cin >> input;

		if (input == -999)
			break;

		list.insertNode(input);
	}

	cout << endl;
	cout << "List 1: ";
	list.print();
	cout << endl;
	cout << "Length List 1: " << list.length();
	cout << endl;

	cout << "Enter the number to be searched: ";
	cin >> input;

	if (list.search(input))
		cout << input << " found in the list" << endl;
	else
		cout << input << " is not in the list" << endl;

	cout << "Enter the number to be deleted: ";
	cin >> input;
	list.deleteNode(input);
	cout << "After deleting the node, List 1: ";;
	list.print();
	cout << endl;

	cout << "Length List 1: " << list.length();

	return 0;
}