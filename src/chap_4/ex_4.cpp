// Create a structure called employee that contains two numbers: an employee number (type int)
// and the employee's compensasion (in dollars; type float). Ask the user to fill in this data
// for three employees, store it in three variables of type struct employee, and then display
// the information for each employee

#include <iostream>

struct employee {
	int id;
	float salary;
};

int main()
{
	employee e_1;
	employee e_2;
	employee e_3;

	std::cout << "Enter the first employee id and salary: ";
	std::cin >> e_1.id >> e_1.salary;
	std::cout << "Enter the second employee id and salary: ";
	std::cin >> e_2.id >> e_2.salary;
	std::cout << "Enter the third employee id and salary: ";
	std::cin >> e_3.id >> e_3.salary;

	std::cout << "The compensation of the employee with id " << e_1.id << " is: " << e_1.salary << std::endl;
	std::cout << "The compensation of the employee with id " << e_2.id << " is: " << e_2.salary << std::endl;
	std::cout << "The compensation of the employee with id " << e_3.id << " is: " << e_3.salary << std::endl;

	return 0;
}