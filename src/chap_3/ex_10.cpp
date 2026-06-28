// Write another version of the program from exercise 7 so that, instead of finding the final amount of your investment, you tell
// the program the final amount and it figures out how many years it will take,  at a fixed  rate of interest compounded yearly, to reach this
// amount. What sort of loop is appropriate for this problem? (Don't worry about fractional years; use an integer value for the year.)

#include <iostream>
#include <format>

int main() 
{
	float amount;
	float final_amount;
	int years = 0;
	float interest_rate;

	std::cout << "Enter initial amount: ";
	std::cin >> amount;
	std::cout << "\nEnter the amount you want: ";
	std::cin >> final_amount;
	std::cout << "\nEnter interest rate (percent per year): ";
	std::cin >> interest_rate;

	while (amount < final_amount)
	{
		amount += (amount * (interest_rate / 100));
		years++;
	}

	std::cout << "\nYou need " << years << " years to get " << std::format("{:.2f}", final_amount) << " dollars" << std::endl;


	return 0;
}
