// Write a program that generates the following output:
//	10
//	20
//	19
// Use an integer constant for 10, an arithmetic assignment operator to generate 20, and a decrement operator to generate 19.


#include <iostream>

int main()
{
	const int ten = 10;
	int twenty = ten * 2;
	int nineteen = twenty - 1;

	std::cout << ten << "\n" << twenty << "\n"
		<< nineteen << std::endl;

	return 0;
}