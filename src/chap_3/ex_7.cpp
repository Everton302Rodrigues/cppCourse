// Write a program that calculates how much money you'll end up with if you invest an amout of money at a fixed interest rate, compounded yearly. Have the user furnish the  
// initial amount, the number of years, and the yearly interest rate in percent. Some interaction with the program
// might look like this:
// Enter initial amount: 3000
// Enter number of years: 10
// Enter interest rate (percent per year): 5.5
// At the end of 10 years, you will have 5124.43 dollars
// At the end of the first year you have 3000 + (3000*0.055).Which is 3165. At the end of secont year you have 3165 + (3165*0.055), which is 3339.08. Do this as many times as
// there are years. A for loop makes the calculation easy.


#include <iostream>
#include <format>

int main() 
{
	float amount;
	int years;
	float interest_rate;

	std::cout << "Enter initial amount: ";
	std::cin >> amount;
	std::cout << "\nEnter number of years: ";
	std::cin >> years;
	std::cout << "\nEnter interest rate (percent per year): ";
	std::cin >> interest_rate;

	for (int i = 0; i < years; ++i)
	{
		float plus_amout = amount * (interest_rate / 100);
		amount += plus_amout;
	}

	std::cout << "\nAt the ent of " << years << " years, you will have " << std::format("{:.2f}", amount) << " dollars" << std::endl;


	return 0;
}