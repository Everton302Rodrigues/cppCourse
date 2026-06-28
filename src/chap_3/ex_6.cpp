// Modify the FACTOR program in this chapter so that it repeatedly asks for a number and calculates its factorial, until the user enters 0, 
// at which point it terminates. You can enclose the relevant statements in FACTOR in a while loop or a do loop to achieve this effect.


#include <iostream>


int main()
{
	unsigned int numb;
	unsigned long fact = 1;
	int opt;
	do
	{
		std::cout << "Enter a number: ";
		std::cin >> numb;
		for (int j = numb; j > 0; --j)
		{
			fact *= j;
		}
		std::cout << "Factorial is " << fact << std::endl;
		std::cout << "Do you want try another number? If don't, just click '0', enter if want to try another: ";
		std::cin >> opt;
	} while (opt != 0);

	return 0;
}