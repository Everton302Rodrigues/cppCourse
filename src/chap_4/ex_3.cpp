// Create a structure called volume that uses three variables of type distance (from the ENGLSTRC example)
// to model the volume of a room. Initialize a variable of type volume to specific dimensions, then calculate
// the volume it represents, and print out the result. To calculate the volume, convert each dimension 
// from a distance variable to a variable of type float representing feet and fractions of a foot, and then
// multiply the resulting three numbers.

#include <iostream>

struct distance {
	int feet;
	float inches;
};

struct volume {
	distance length;
	distance width;
	distance height;
};


int main()
{
	volume vol = { {10, 6.0f}, {12, 0.0f}, {8, 4.5f} };
	float l_feet = vol.length.feet + (vol.length.inches / 12.0f);
	float w_feet = vol.width.feet + (vol.width.inches / 12.0f);
	float h_feet = vol.height.feet + (vol.height.inches / 12.0f);

	float total_volume = l_feet * w_feet * h_feet;

	std::cout << "The volume of the room is: " << total_volume << " foots per cubic." << std::endl;

	return 0;
}