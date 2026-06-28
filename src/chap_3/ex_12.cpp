// Create a four-function calculator for fractions. (See Exercise 9 in chapter , and Exercise 4 in this chapter).
// Here are formulas for th four arithmetic operations applied to fractions:
// Addition			a/b + c/d = (a*d + b*c)/ (b*d)
// Subtraction		a/b - c/d = (a*d - b*c)/ (b*d)
// multiplication	a/b / c/d = (a*c) / (b*d)
// division			a/b * c/d = (a*d) / (b*c)
// The user should type the first fraction, an operador, and second fraction. The program
// should then display the result and ask whether the user wants to continue.
#include <iostream>


int main()
{
	char repeat;
	while (1)
	{
		float a, b;
		float c, d;
		char division1;
		char division2;
		char op;
		std::cout << "Enter first fraction, operator, second fraction: ";
		std::cin >> a >> division1 >> b >> op >> c >> division2 >> d;
		float result = 0;
		switch(op) {
			case '+':
				result = ((a*d) + (b*c)) / (b*d);
				break;
			case '-':
				result = ((a*d) - (b*c)) / (b*d);
				break;
			case '*':
				result = (a * c) / (b * d);
				break;
			case '/':
				result = (a*d)/(b*c);
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
				std::cout << "Invalid options, enter 'y' or 'n'!" << std::endl;
			}
		} while (repeat != 'y' && repeat != 'n');

		if (repeat == 'n')
		{
			return 0;
		}
	}
}
