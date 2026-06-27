// You can convert temperature from degrees Celsius to degrees Fahrenheit by multiplying by 9/5 and then adding 32.
// write a program that allows the user to enter a floating-point number representing a temperature
// in degrees Celsius, and then displays the corresponding degrees Fahrenheit.

#include <iostream>

int main()
{
	float celsiustemperature;
	std::cin >> celsiustemperature;

	float fahrenheittemperature = (celsiustemperature * (9/5)) + 32;
	std::cout << "Temperature in Celsius: " << celsiustemperature << std::endl;
	std::cout << "Temperature in Fahrenheit: " << fahrenheittemperature << std::endl;

	return 0;
}