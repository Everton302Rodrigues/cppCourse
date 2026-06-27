// When a value is smaller than a field specified with setw(), the unused locations are,
// by default, filled with spaces. The manipulator setfill() takes a single character as an argument and causes this character
// to be substituted for spaces in the empty parts of a field. Rewrite the WIDTH program so that the characters on each line between
// the location name and the population number are filled in with periods instead of spaces, as in
// Portcity.....2425785


#include <iostream>
#include <iomanip>


int main()
{
	std::string city = "Portcity";
	long pop = 2425785;

	std::cout << city;
	std::cout << std::setfill('.') << std::setw(20) << pop << std::endl;
	
	return 0;
}