// Write a program that repeatedly asks the user to enter two money amounts expressed in old-style British currency: pounds, shillings, and pence. 
// (See Exercises 10 and 12 in Chapter 2, "C++ Programming Basics.") The program should then add the two amounts and display the answer, again in pounds, shillings and pence.
// Use a do loop that asks the user whether the program should be terminated. Typical interaction might be 
// Enter first amount: £5.10.6
// Enter second amount: £3.2.6
// Total is £8.13.0
#include <iostream>

int main()
{

	char terminate = 'n';
	int result_pounds = 0, result_shillings = 0, result_pence = 0;
	int first_pounds, first_shillings, first_pence;
	int second_pounds, second_shillings, second_pence;

	do
	{
		std::cout << "Enter first amount: ";
		std::cin >> first_pounds >> first_shillings >> first_pence;
		std::cout << "Enter second amount: ";
		std::cin >> second_pounds >> second_shillings >> second_pence;
		
		result_pence = first_pence + second_pence;
		
		if (result_pence == 12)
		{
			result_pence = 0;
			result_shillings++;
		}
		else if (result_pence > 12)
		{
			result_pence = result_pence - 12;
			result_shillings++;
		}
		
		result_shillings += (first_shillings + second_shillings);

		if (result_shillings == 20)
		{
			result_shillings = 0;
			result_pounds++;
		}
		else if (result_shillings > 20)
		{
			result_shillings = result_shillings - 20;
			result_pounds++;
		}

		result_pounds += (first_pounds + second_pounds);

		std::cout << "\nTotal is £" << result_pounds << "." << result_shillings << "." << result_pence << std::endl;

		std::cout << "Do you want to add two others amounts(y/n)?  ";
		std::cin >> terminate;

	} while (terminate == 'y');

	return 0;
}