// Write a temperature-conversion program that gives the user the option of converting Fahrenheit to Celsius or Celsius to Fahrenheit.
// Then carry out the conversion. Use floating-point numbers.  Interaction with the program might look like this:
// Type 1 to convert Fahrenheit to Celsius,
//		2 to convert Celsius to Fahrenheit: 1
// Enter temperature in Fahrenheit: 70
// In Celsius that's 21.111111
#include <iostream>


int main()
{
	// valor * 9/5 + 32
	int opt;
	std::cout << "Type 1 to convert Fahrenheit to Celsius\n\t2 to convert Celsius to Fahrenheit: ";
	std::cin >> opt;

	float temperature;
	if (opt == 1) 
	{
		std::cout << "Enter temperature in Fahrenheit: ";
		std::cin >> temperature;
		int celsius = (temperature - 32) / (9 / 5);
		std::cout << "In Celsius that's: " << celsius << std::endl;
		return 0;
	}
	else if (opt == 2)
	{
		std::cout << "Enter temperature in Celsius: ";
		std::cin >> temperature;
		int fahrenheit = (temperature * (9/5)) + 32;
		std::cout << "In Fahrenheit that's: " << fahrenheit << std::endl;
		return 0;
	}
	else
	{
		std::cout << "Invalid option" << std::endl;
		return 1;
	}
}