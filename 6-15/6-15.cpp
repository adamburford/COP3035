// 6-15.cpp

#include <iostream>
#include <cmath>
using namespace std;

void getInput(double& windSpeed, double& temperature);
double calculateWindChillFactor(double windSpeed, double tempearture);

int main()
{
	double windSpeed = 0.0;
	double temperature = 0.0;
	double windChillFactor = 0.0;

	getInput(windSpeed, temperature);
	windChillFactor = calculateWindChillFactor(windSpeed, temperature);

	cout << "Current Temperature: " << fixed << temperature << endl;
	cout << "Wind Chill Factor: " << fixed << windChillFactor << endl;

}

void getInput(double& windSpeed, double& temperature)
{
	cout << "Input the wind speed (in miles per hour): ";
	cin >> windSpeed;
	cout << "Input the temperature (in degrees Fahrenheit): ";
	cin >> temperature;
}

double calculateWindChillFactor(double windSpeed, double tempearture)
{
	return 35.74 + (0.6215 * tempearture) - (35.75 * pow(windSpeed, 0.16)) + (0.4275 * tempearture * pow(windSpeed, 0.16));
}
