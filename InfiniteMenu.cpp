#include<iostream>

int main() {

	int a;

	std::cout << "===== EXPENSE TRACKER =====" << std::endl;

	std::cout << "1. Add Expense" << std::endl;

	std::cout << "2. View Expenses" << std::endl;

	std::cout << "3. Show Total" << std::endl;

	std::cout << "4. Exit" << std::endl;

	std::cout << "Choose: ";

	do {

		std::cin >> a;

		switch (a) {
		
		case 1:

			std::cout << "1. Add Expense selected." << std::endl;
		
			break;
		
		case 2:

			std::cout << "2. View Expenses selected." << std::endl;

			break;

		case 3:

			std::cout << "3. Show Total selected."<< std::endl;

			break;

		case 4:

			break;

		default:

			std::cout << "Invalid choice.";

			break;
		
		}

	} while (a != 4);

	return 0;

}