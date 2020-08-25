#include <iostream>
#include <iomanip>
using namespace std;

const double poundsPerKilogram = 2.2;

int main() {
	
	double inputWeightKilograms = 0.0;

	cout << "Please enter the weight of a person (in kilograms): ";
	cin >> inputWeightKilograms;

	double ouputWeightPounds = inputWeightKilograms * poundsPerKilogram;

	cout << setprecision(2) << ouputWeightPounds;

	return 0;
}
