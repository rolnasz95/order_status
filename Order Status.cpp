#include <iostream>

void getOrder(int&, int&, int&);
void displayOrder(int, int, int);

int main()
{
	int orderAmount{}, orderStock{}, specialCharge{};
	int choice{};

	std::cout << "Enter 1 to start the program or 0 to terminate...";
	std::cin >> choice;

	// Validate input for menu choice
	while ((choice != 1) && (choice != 0))
	{
		std::cout << "Try again! Press 1 to start or 0 to exit: ";
		std::cin >> choice;
	}

	// Continue to run the program as long as choice == 1
	while (choice == 1)
	{
		getOrder(orderAmount, orderStock, specialCharge);
		displayOrder(orderAmount, orderStock, specialCharge);
		
		std::cout << "\nDo you want to start over? Press 1 for yes, 0 to exit: ";
		std::cin >> choice;
	}

	// Terminate if user enters 0
	if (choice == 0)
	{
		std::cout << "Exiting...";
		exit(0);
	}

	return 0;
}