// Assume that you want to generate a table of multiples of any given number. Write a program that allows the user to enter
// the number and then generates the table, formatting it into 10 columns and 20 lines. Interaction with the program should look like this
// (only the first three lines are shown)
// Enter a number: 7
//		7		14		21		28	    35		42		49		56		63		70
//	   77		84		91		98	   105	   112	   119	   126	   133	   140
//	  147	   154	   161	   168	   175	   182	   189	   196	   203	   210

#include <iostream>
#include <iomanip>


int main()
{
	int number;
	std::cin >> number;
	
	int row = 20;
	int col = 10;
	int control = 0;
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			++control;
			std::cout << std::setw(5) << std::right << number * control;
		}
		std::cout << "\n";
	}

	return 0;
}