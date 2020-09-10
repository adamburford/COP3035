#include <iostream>
#include <string>

using namespace std;

int vowels(string s);
bool isVowel(char c);

int main() {

	string s;

	cout << "Enter a string: ";
	getline(cin, s);

	cout << "Vowels: " << vowels(s) << endl;

	return 0;
}

int vowels(string s)
{
	int size = s.size();

	if (size == 1)
		return isVowel(s[0]) ? 1 : 0;
	else
	{
		int half = size / 2;
		return vowels(s.substr(0, half)) + vowels(s.substr(half, size - 1));
	}

}

bool isVowel(char c)
{
	c = tolower(c);
	if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
		return true;

	return false;
}