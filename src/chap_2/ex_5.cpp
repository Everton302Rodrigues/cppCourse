// A library function islower(), takes a single character (a letter) as an argument and returns a nonzero integer if the letter is lowercase, or zero if it is uppercase. This function
// requires the header CTYPE.h. Write a program that allows the user to enter a single letter, and then displyas either zero or a nonzero, depending on whetter a lowercase or uppercase
// letter was entered.

#include <iostream>
#include <ctype.h>

int main()
{
	char letter;

	std::cin >> letter;
	std::cout << islower(letter) << std::endl;
	

	return 0;
}