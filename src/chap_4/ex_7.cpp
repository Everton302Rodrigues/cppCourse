// Add a variable of type enum etype (see Exercise 6), and another variable of type struct date (see exercise 5) to the employee class of Exercise 4.
// Organize the resulting program so that the user enters four items of information in three variables of type employee, and then display their content.
#include <iostream>

enum etype { laborer, secretary, manager, accountant, executive, researcher };

struct date
{
	int month;
	int day;
	int year;
};

struct employee
{
	etype type;
	date hire_date;
};

int main()
{
	employee everton;
	employee leonel;
	employee rodrigues;
	char everton_type, leonel_type, rodrigues_type;
	etype everton_chosen_type, leonel_chosen_type, rodrigues_chosen_type;

	std::cout << "Enter Everton employee type, then enter leonel employee type and last, enter Rodrigues employee type (first letter only): (laborer, secretary, manager, accountant, executive, researcher): ";
	std::cin >> everton_type >> leonel_type >> rodrigues_type;

	std::cout << "\nEnter Everton hire date (month day year): ";
	std::cin >> everton.hire_date.month >> everton.hire_date.day >> everton.hire_date.year;

	std::cout << "\nEnter Leonel hire date (month day year): ";
	std::cin >> leonel.hire_date.month >> leonel.hire_date.day >> leonel.hire_date.year;

	std::cout << "\nEnter Rodrigues hire date (month day year): ";
	std::cin >> rodrigues.hire_date.month >> rodrigues.hire_date.day >> rodrigues.hire_date.year;

	switch (everton_type)
	{
		case 'l':
			everton_chosen_type = laborer;
			break;
		case 's':
			everton_chosen_type = secretary;
			break;
		case 'm':
			everton_chosen_type = manager;
			break;
		case 'a':
			everton_chosen_type = accountant;
			break;
		case 'e':
			everton_chosen_type = executive;
			break;
		case 'r':
			everton_chosen_type = researcher;
			break;
		default:
			std::cout << "Invalid value" << std::endl;
			return 1;
	}
	
	switch (everton_chosen_type) 
	{
	case laborer: std::cout << "\nEverton employee type: " << "laborer, hire date: " << everton.hire_date.month << "/" << everton.hire_date.day << "/" << everton.hire_date.year << std::endl; break;
	case secretary: std::cout << "\nEverton employee type: " << "secretary, hire date: " << everton.hire_date.month << "/" << everton.hire_date.day << "/" << everton.hire_date.year << std::endl; break;
	case manager: std::cout << "\nEverton employee type: " << "manager, hire date: " << everton.hire_date.month << "/" << everton.hire_date.day << "/" << everton.hire_date.year << std::endl; break;
	case accountant: std::cout << "\nEverton employee type: " << "accountant, hire date: " << everton.hire_date.month << "/" << everton.hire_date.day << "/" << everton.hire_date.year << std::endl; break;
	case executive: std::cout << "\nEverton employee type: " << "executive, hire date: " << everton.hire_date.month << "/" << everton.hire_date.day << "/" << everton.hire_date.year << std::endl; break;
	case researcher: std::cout << "\nEverton employee type: " << "researcher, hire date: " << everton.hire_date.month << "/" << everton.hire_date.day << "/" << everton.hire_date.year << std::endl; break;
	}

	switch (leonel_type)
	{
		case 'l':
			leonel_chosen_type = laborer;
			break;
		case 's':
			leonel_chosen_type = secretary;
			break;
		case 'm':
			leonel_chosen_type = manager;
			break;
		case 'a':
			leonel_chosen_type = accountant;
			break;
		case 'e':
			leonel_chosen_type = executive;
			break;
		case 'r':
			leonel_chosen_type = researcher;
			break;
		default:
			std::cout << "Invalid value" << std::endl;
			return 1;
	}
	
	switch (leonel_chosen_type) 
	{
	case laborer: std::cout << "\nLeonel employee type: " << "laborer, hire date: " << leonel.hire_date.month << "/" << leonel.hire_date.day << "/" << leonel.hire_date.year << std::endl; break;
	case secretary: std::cout << "\nLeonel employee type: " << "secretary, hire date: " << leonel.hire_date.month << "/" << leonel.hire_date.day << "/" << leonel.hire_date.year << std::endl; break;
	case manager: std::cout << "\nLeonel employee type: " << "manager, hire date: " << leonel.hire_date.month << "/" << leonel.hire_date.day << "/" << leonel.hire_date.year << std::endl; break;
	case accountant: std::cout << "\nLeonel employee type: " << "accountant, hire date: " << leonel.hire_date.month << "/" << leonel.hire_date.day << "/" << leonel.hire_date.year << std::endl; break;
	case executive: std::cout << "\nLeonel employee type: " << "executive, hire date: " << leonel.hire_date.month << "/" << leonel.hire_date.day << "/" << leonel.hire_date.year << std::endl; break;
	case researcher: std::cout << "\nLeonel employee type: " << "researcher, hire date: " << leonel.hire_date.month << "/" << leonel.hire_date.day << "/" << leonel.hire_date.year << std::endl; break;
	}

	switch (rodrigues_type)
	{
		case 'l':
			rodrigues_chosen_type = laborer;
			break;
		case 's':
			rodrigues_chosen_type = secretary;
			break;
		case 'm':
			rodrigues_chosen_type = manager;
			break;
		case 'a':
			rodrigues_chosen_type = accountant;
			break;
		case 'e':
			rodrigues_chosen_type = executive;
			break;
		case 'r':
			rodrigues_chosen_type = researcher;
			break;
		default:
			std::cout << "Invalid value" << std::endl;
			return 1;
	}
	
	switch (rodrigues_chosen_type) 
	{
	case laborer: std::cout << "\nRodrigues employee type: " << "laborer, hire date: " << rodrigues.hire_date.month << "/" << rodrigues.hire_date.day << "/" << rodrigues.hire_date.year << std::endl; break;
	case secretary: std::cout << "\nRodrigues employee type: " << "secretary, hire date: " << rodrigues.hire_date.month << "/" << rodrigues.hire_date.day << "/" << rodrigues.hire_date.year << std::endl; break;
	case manager: std::cout << "\nRodrigues employee type: " << "manager, hire date: " << rodrigues.hire_date.month << "/" << rodrigues.hire_date.day << "/" << rodrigues.hire_date.year << std::endl; break;
	case accountant: std::cout << "\nRodrigues employee type: " << "accountant, hire date: " << rodrigues.hire_date.month << "/" << rodrigues.hire_date.day << "/" << rodrigues.hire_date.year << std::endl; break;
	case executive: std::cout << "\nRodrigues employee type: " << "executive, hire date: " << rodrigues.hire_date.month << "/" << rodrigues.hire_date.day << "/" << rodrigues.hire_date.year << std::endl; break;
	case researcher: std::cout << "\nRodrigues employee type: " << "researcher, hire date: " << rodrigues.hire_date.month << "/" << rodrigues.hire_date.day << "/" << rodrigues.hire_date.year << std::endl; break;
	}

	return 0;
}