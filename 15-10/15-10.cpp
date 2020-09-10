#include <iostream>
#include <cmath>
using namespace std;

int sumDigits(int input);

int main()
{
	int input = 0;

	cout << "Enter a number: ";
	cin >> input;

	cout << "Sum of digits: " << sumDigits(input) << endl;

	return 0;
}

int sumDigits(int i)
{
	if (i < 10)
		return i;

	int exp = 0;
	int base = i;

	while (base > 10)
	{
		base /= 10;
		exp++;
	}

	int tens = pow(10, exp);
	int remainder = i - (base * tens);
	int firstDigit = i / tens;

	return firstDigit + sumDigits(remainder);
}