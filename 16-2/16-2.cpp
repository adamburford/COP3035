// 16-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#include "doublyLinkedList.h"

int main()
{
	doublyLinkedList<int> list = doublyLinkedList<int>();

	cout << "Enter a list of positive integers ending with -999: ";
	
	int input = 0;
	
	while (true)
	{
		cin >> input;

		if (input == -999)
			break;

		list.insert(input);
	}

	cout << endl;

	cout << "List in ascending order: ";
	list.print();
	cout << endl;
	cout << "List in descending order: ";
	list.reversePrint();
	cout << endl;
	cout << "Enter item to be deleted: ";
	cin >> input;
	list.deleteNode(input);
	cout << "List after deleting " << input << " : ";
	list.print();
	cout << endl;
	cout << "Enter item to be searched: ";
	cin >> input;

	if (list.search(input))
		cout << input << " found in the list." << endl;
	else
		cout << input << " not found in the list." << endl;

	cout << "********Testing copy constructor***********" << endl;
	doublyLinkedList<int> copy = doublyLinkedList<int>(list);
	cout << "intList: ";
	copy.print();
	cout << endl;
	cout << "********Testing assignment operator***********" << endl;
	list = copy;
	list.print();
	cout << endl;

	return 0;
}

