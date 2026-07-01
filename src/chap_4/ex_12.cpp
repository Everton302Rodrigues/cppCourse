// Revise the four-function fraction calculator program of Exercise 12 in chapter 3 so that each fraction is stored internally as a variable
// of type struct fraction, as discussed in Exercise 8 in this chapter.
#include <iostream>


struct Fraction
{
	float numerator;
	float denominator;
};

int main()
{
	char repeat;
	while (1)
	{
		Fraction frac1, frac2;
		char dummy;
		char op;
		std::cout << "Enter first fraction, operator, second fraction: ";
		std::cin >> frac1.numerator >> dummy >> frac1.denominator >> op >> frac2.numerator >> dummy >> frac2.denominator;
		float result = 0;
		switch(op) {
			case '+':
				result = ((frac1.numerator * frac2.denominator) + (frac1.denominator * frac2.numerator)) / (frac1.denominator * frac2.denominator);
				break;
			case '-':
				result = ((frac1.numerator * frac2.denominator) - (frac1.denominator * frac2.numerator)) / (frac1.denominator * frac2.denominator);
				break;
			case '*':
				result = (frac1.numerator * frac2.numerator) / (frac1.denominator * frac2.denominator);
				break;
			case '/':
				result = (frac1.numerator*frac2.denominator)/(frac1.denominator*frac2.numerator);
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
