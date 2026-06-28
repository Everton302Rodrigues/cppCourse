// Operators such as >>, which read input from keyboard, must be able to convert a series of digits
// into a number. Write a program that does the same thing. It should allow the user to type up to six digits,
// and then display the resulting number as a type long integer. The digits should be read individually, as characters, using getche().
// Constructing the number involves multiplying the existing value by 10 and then adding the new digit
//. (HINT: Subtract 48 or '0' to go from ASCII to a numerical digit.)
// Here's some sample interaction
// Enter a number: 123456
// Number is: 123456


#include <iostream>
#include <conio.h>

int main()
{
	long total_number = 0;
	std::cout << "Enter a number: ";

	for (int i = 0; i < 6; i++)
	{
		char val = getche();
		int digit = val - '0';
		total_number = (total_number * 10) + digit;
	}

	std::cout << "\nNumber is: " << total_number << std::endl;
	return 0;
}