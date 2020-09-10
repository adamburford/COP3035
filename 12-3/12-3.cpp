// 12-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// 12-3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;

void printWinner(string* candidate, int* vote, int totalVotes);

int main()
{
	int numberOfCandidates = 0;
	string* candidate;
	int* vote;

	cout << "Enter number of candidates: ";
	cin >> numberOfCandidates;

	candidate = new string[numberOfCandidates];
	vote = new int[numberOfCandidates];

	for (int i = 0; i < numberOfCandidates; i++)
	{
		cout << "Enter candidate last name: ";
		cin >> candidate[i];
		cout << "Enter the number of votes for " << candidate[i] << ": ";
		cin >> vote[i];
	}

	cout << endl << endl;
	printWinner(candidate, vote, numberOfCandidates);

	delete[] candidate;
	delete[] vote;
}

void printWinner(string* candidate, int* vote, int numberOfCandidates)
{
	const int WIDTH = 20;
	cout << "Candidate           Votes Received      % of Total Votes" << endl;
	cout << left;
	int winner = 0;
	int totalVotes = 0;

	cout << fixed << setprecision(2);

	for (int i = 0; i < numberOfCandidates; i++)
		totalVotes += vote[i];

	for (int i = 0; i < numberOfCandidates; i++)
	{
		cout << setw(WIDTH) << candidate[i] << setw(WIDTH) << vote[i] << setw(WIDTH) << ((double)vote[i] / (double)totalVotes) * 100.0 << endl;

		if (vote[i] > vote[winner])
			winner = i;
	}

	cout << setw(WIDTH) << "Total" << setw(WIDTH) << totalVotes << endl << endl;

	cout << "The Winner of the Election is " << candidate[winner];

}