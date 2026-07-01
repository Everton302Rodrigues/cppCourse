// Start with the fraction-adding program of exercise 9 in chapter 2, "C++ Programming Basics". This program stores the numerator and denominator
// of two fractions before adding them, and may also store the answer, which is also a fraction. Modify the program so that all fractions are
// stored in variables of type struct fraction, whose two members are the fraction's numerator and denominator (both type int). All fraction-related data
// should be stored in structures of this type
#include <iostream>

struct fraction {
	int numerator;
	int denominator;
};

int main()
{
	fraction f1, f2, result;

	std::cout << "Enter the numerator and denominator of the first fraction: ";
	std::cin >> f1.numerator >> f1.denominator;
	std::cout << "Enter the numerator and denominator of the second fraction: ";
	std::cin >> f2.numerator >> f2.denominator;

	result.numerator = f1.numerator * f2.denominator + f2.numerator * f1.denominator;
	result.denominator = f1.denominator * f2.denominator;

	std::cout << "The sum of the fractions is: " << result.numerator << "/" << result.denominator << std::endl;
	

	return 0;
}

