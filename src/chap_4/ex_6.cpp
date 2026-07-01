// We said earlier that C++ I/O statement don't automatically understand the data types
// of enumarations. Instead, the (>>) and (<<) operators think of such variables simply as integers.
// You can overcome this limitation by using switch statements to translate
// between the user's way of expressed an enumerated variable and the actual values
// of the enumerated variable. For example, imagine an enumarated type with values that indicate
// an employee type with an organization.
// enum type { laborer, secretary, manager, accountant, executive, researchr };
// Write a program that first allows the user to specify a type by entering its first letter
// ('1', 's', 'm', and so on), then store the type chosen as a value of variable
// of type enum type, and finally displays the complete word of this type.
// Enter employee type (first letter only): 
// laborer, secretary, manager, accountant, executive, researcher): a
// Emmployee is a accountant.
#include <iostream>


enum type_employee { laborer, secretary, manager, accountant, executive, researcher };

int main()
{
	char first_letter;
	type_employee chosen_type;
	std::cout << "Enter employee type (first letter only): (laborer, secretary, manager, accountant, executive, researcher): ";
	std::cin >> first_letter;

	switch (first_letter)
	{
		case 'l':
			chosen_type = laborer;
			break;
		case 's':
			chosen_type = secretary;
			break;
		case 'm':
			chosen_type = manager;
			break;
		case 'a':
			chosen_type = accountant;
			break;
		case 'e':
			chosen_type = executive;
			break;
		case 'r':
			chosen_type = researcher;
			break;
		default:
			std::cout << "Invalid value" << std::endl;
			return 1;
	}
	
	std::cout << "Employee is a :";
	switch (chosen_type) 
	{
	case laborer: std::cout << "laborer" << std::endl; break;
	case secretary: std::cout << "secretary" << std::endl; break;
	case manager: std::cout << "manager" << std::endl; break;
	case accountant: std::cout << "accountant" << std::endl; break;
	case executive: std::cout << "executive" << std::endl; break;
	case researcher: std::cout << "researcher" << std::endl; break;
	}

	std::cout << ".\n";
	return 0;
}











