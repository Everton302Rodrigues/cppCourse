// On a certain day the British pound was equivalent to $1.487 U.S. The French franc was $0.172 U.S., the German deutschmark was $0.584 U.S., and the Japanese
// yen was $0.00955 U.S. Write a program that allows the user to enter an amount in dollars, and then displays this value converted to these four other monetary units.


#include <iostream>
#include <format>


int main()
{
	double value;

	std::cin >> value;
	double pound = value / 1.487;
	double franc = value / 0.172;
	double deutschmark = value / 0.584;
	double yen = value / 0.00955;

	std::cout << "Pound: " << std::format("{:.2f}\n", pound);
	std::cout << "Franc: " << std::format("{:.2f}\n", franc);
	std::cout << "Deutschmark: " << std::format("{:.2f}\n", deutschmark);
	std::cout << "Yen: " << std::format("{:.2f}\n", yen);

	return 0;
}