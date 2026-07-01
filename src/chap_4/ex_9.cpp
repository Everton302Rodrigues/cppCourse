// Create a structure called time. Its three members, all type int, should e called hours, minutes and seconds.
// Write a program that prompts the user to enter a time value in entered at a separate prompt ("Enter hours: ", and so fouth).
// The program should then store the time in a variable of type struct time, and finally print out the total number of seconds represented by this time value.
// long totalsecs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;

#include <iostream>

struct time_ex {
	int hours;
	int minutes;
	int seconds;
};

int main()
{
	time_ex user_time;

	std::cout << "Enter hours: ";
	std::cin >> user_time.hours;
	
	std::cout << "Enter minuter: ";
	std::cin >> user_time.minutes;

	std::cout << "Enter seconds: ";
	std::cin >> user_time.seconds;

	int result = user_time.hours * 3600 + user_time.minutes * 60 + user_time.seconds;

	std::cout << "Total seconds: " << result << std::endl;

	return 0;
}