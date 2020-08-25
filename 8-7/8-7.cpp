// 8-7.cpp

#include <iostream>
#include <iomanip>
using namespace std;

int calculateTotalVotes(int votes[5]);
void printWinner(string candidate[5], int vote[5], int totalVotes);

int main()
{
	string candidate[5];
	int vote[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Enter candidate last name: ";
		cin >> candidate[i];
		cout << "Enter the number of votes for " << candidate[i] << ": ";
		cin >> vote[i];
	}

	int totalVotes = calculateTotalVotes(vote);

	printWinner(candidate, vote, totalVotes);
}

int calculateTotalVotes(int votes[5])
{
	int total = 0;

	for (int i = 0; i < 5; i++)
	{
		total += votes[i];
	}

	return total;
}

void printWinner(string candidate[5], int vote[5], int totalVotes)
{
	const int WIDTH = 20;
	cout << "Candidate           Votes Received      % of Total Votes" << endl;
	cout << left;
	int winner = 0;

	for (int i = 0; i < 5; i++)
	{
		cout << setw(WIDTH) << candidate[i] << setw(WIDTH) << vote[i] << setw(WIDTH) << fixed << setprecision(2) << ((double)vote[i] / (double)totalVotes) * 100.0 << endl;
		if (vote[i] > vote[winner])
			winner = i;
	}

	cout << setw(WIDTH) << "Total Votes: " << setw(WIDTH) << totalVotes << endl << endl;

	cout << "The Winner of the Election is " << candidate[winner];

}

