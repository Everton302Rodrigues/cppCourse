// Create a structure called sterling that store money amounts in the old-style British sytem discussed in Exercise 8 and 11 in chapter 3 "Loops and Decisions".
// The mombers could be called pounds, shillings and pence, all of type int. The program should ask the user to enter a money amount
// in new style decimal pounds (type double), convert it to the old-style sytem, store it in a variable of type struct sterling, and then
// display this amount in pounds-shillings-pence format

#include <iostream>

struct sterling {
	int pounds;
	int shillings;
	int pence;
};

int main()
{
	double decimal_pounds;

	std::cout << "Enter a money amount in decimal pounds: ";
	std::cin >> decimal_pounds;

	sterling old_style;
	old_style.pounds = static_cast<int>(decimal_pounds);
	double fractional_pounds = decimal_pounds - old_style.pounds;
	old_style.shillings = static_cast<int>(fractional_pounds * 20);
	double fractional_shillings = fractional_pounds * 20 - old_style.shillings;
	old_style.pence = static_cast<int>(fractional_shillings * 12);


	std::cout << "Old-style amount: " << old_style.pounds << " pounds, " << old_style.shillings << " shillings, " << old_style.pence << " pence" << std::endl;


	return 0;
}