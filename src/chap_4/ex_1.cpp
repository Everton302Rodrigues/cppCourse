// A phone number, such (212) 767-8900, can be thought of as having three parts: the area code
// (212), the exchenge (767), and the number (8900). Write a program that uses a structure
// phone. Create two structure variables of type phone. Initialize one, and have the user input
// a number for the other one. Then display both numbers. The interchange might look like this:
// Enter your area code, exchange, and number: 415 555 1212
// My number is (212) 767-8900
// Your number is (415) 555-1212

#include <iostream>

struct phone {
	int areacode;
	int exchange;
	int number;
};


int main()
{
	phone phone_1 = { 212, 767, 8900 };
	phone phone_2;
	std::cout << "Enter your area code, exchange, and number: ";
	std::cin >> phone_2.areacode >> phone_2.exchange >> phone_2.number;
	std::cout << "\nMy number is (" << phone_1.areacode << ")" << " " << phone_1.exchange << "-" << phone_1.number << std::endl;
	std::cout << "Your number is (" << phone_2.areacode << ")" << " " << phone_2.exchange << "-" << phone_2.number << std::endl;

	return 0;
}