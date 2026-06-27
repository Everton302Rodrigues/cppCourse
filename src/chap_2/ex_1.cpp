// Assuming there are 7.481 gallons in a cubic foot, write a program that asks the user to enter a number of gallons, and then displays the equivalent in cubic feet.
#include <iostream>


int main() {
	const double GALLONS_PER_CUBIC_FOOT = 7.481;
	double gallons;
	std::cout << "Enter the number of gallons: ";
	std::cin >> gallons;
	double cubicFeet = gallons / GALLONS_PER_CUBIC_FOOT;
	std::cout << gallons << " gallons is equivalent to " << cubicFeet << " cubic feet." << std::endl;
	return 0;
}