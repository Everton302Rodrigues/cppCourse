// Create the equivalent of a four-function calculator. The program should ask the user to enter a number, an operador, and another number.
// (Use floating point). It should then carry out the specified arithmetical operation: adding, subtracting, multiplying, or dividing the two numbers.
// Use a switch statement to select the operation. Finally, display the result
// When finishes the calculation, the program should ask whether the user wants to do another calculation. The response can be 'y' or 'n'. Some sample interaction with the program
// might look like this.
// Enter the first number, operator, second number: 10/3
// Answer = 112
// Do another (y/n) ? n


#include <iostream>


int main()
{
	char repeat;
	while (1)
	{
		float number_1;
		char op;
		float number_2;
		std::cout << "Enter first number, operator, second number: ";
		std::cin >> number_1 >> op >> number_2;
		float result = 0;
		switch(op) {
			case '+':
				result = number_1 + number_2;
				break;
			case '-':
				result = number_1 - number_2;
				break;
			case '*':
				result = number_1 * number_2;
				break;
			case '/':
				if (number_2 == 0)
				{
					std::cout << "Invalid value for divisor!";
					std::cout << "\nDo you want try again? (y/n)";
					do
					{
						std::cin >> repeat;
						if (repeat != 'y' && repeat != 'n')
						{
							std::cout << "Invalid options, enter 'y' or 'n'!" << std::endl;
						}
					} while (repeat != 'y' && repeat != 'n');

					if (repeat == 'n')
					{
						return 0;
					}
					continue;
				}
				result = number_1 / number_2;
				break;
			default:
				std::cout << "Invalid operator, try again!";
				break;
		}
		std::cout << "Answer: " << result << std::endl;
		std::cout << "\nDo you want try again? (y/n)";
		do
		{
			std::cin >> repeat;
			if (repeat != 'y' && repeat != 'n')
			{
				std::cout << "Invalid options, enter 's' or 'n'!" << std::endl;
			}
		} while (repeat != 'y' && repeat != 'n');

		if (repeat == 'n')
		{
			return 0;
		}
	}
}