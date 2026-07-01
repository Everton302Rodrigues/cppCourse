// Create a structure of type date that contains  three members: the month, the day of the month and the year
// all of type int. (Or use day-month-year order if you prefer) Have the user enter a date in the format mm/dd/yyyy
// store it in a variable of type struct date, then retrieve the values from the variable and print them out in the same
// format.


#include <iostream>

struct date {
	int day;
	int month;
	int year;
};

int main()
{
	date inputed_date;
	char ch_format;
	std::cout << "Enter you desired date in the format mm/dd/yyyy: ";
	std::cin >> inputed_date.month >> ch_format >> inputed_date.day >> ch_format >> inputed_date.year;

	std::cout << "Your inputed date is: " << inputed_date.month << "/" << inputed_date.day << "/" << inputed_date.year << std::endl;

	return 0;
}