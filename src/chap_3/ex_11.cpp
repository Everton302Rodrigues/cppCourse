// Create a three function calculator for old-style English currency, where money amounts 
// are specified in pounds, shillings, and pence. (See exercise 10 and 12 in chapter 2.)
// The calculator should allow the user to add or subtract two money amounts, or to multiply two money amounts
// by a floating-point number. (It doesn't make sense multiply two money amounts; there is no such thing as square money.
// We'll ignore division. Use the general style of the ordinary four-function calculator in exercise 4 in this chapter.)

#include <iostream>
#include <format>

int main()
{
	char repeat;
	while (1)
	{
		int option;
		std::cout << "What do you want to do now? " << std::endl;
		std::cout << "Add two amounts (1)\nSubtract two amounts(2)\nMultiply an amount by a given number(3)\n(0) for exit the program: ";
		std::cin >> option;
		float first_amount;
		float second_amount;
		float multiply_by;
		float result = 0;
		switch (option)
		{
		case 0:
			std::cout << "Exiting program!";
			return 0;
		case 1:
			std::cout << "Enter the first amount: ";
			std::cin >> first_amount;
			std::cout << "Enter the second amount: ";
			std::cin >> second_amount;
			result = first_amount + second_amount;
			std::cout << "The result for adding this two amount is: " << std::format("{:.2f}", result) << std::endl;
			break;
		case 2:
			std::cout << "Enter the first amount: ";
			std::cin >> first_amount;
			std::cout << "Enter the second amount: ";
			std::cin >> second_amount;
			result = first_amount - second_amount;
			std::cout << "The result for subtracting this two amount is: " << std::format("{:.2f}", result) << std::endl;
			break;
		case 3:
			std::cout << "Enter the amount: ";
			std::cin >> first_amount;
			std::cout << "Enter the number you want to multiply by: ";
			std::cin >> multiply_by;
			result = first_amount * multiply_by;
			std::cout << "The result for multiplying the " << std::format("{:.2f}", first_amount) << " by " << multiply_by << " is: " << std::format("{:.2f}", result) << std::endl;
			break;
		}
	}
}
