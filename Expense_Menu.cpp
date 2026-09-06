#include<iostream>

int getExpenseAmount() {

	std::cout << "=========================" << std::endl;

	std::cout << "     EXPENSE TRACKER     " << std::endl;

	std::cout << "=========================" << std::endl;

	std::cout << "1. Add Expense" << std::endl;

	std::cout << "2. View Expenses" << std::endl;

	std::cout << "3. Show Total" << std::endl;

	std::cout << "4. Delete Expense" << std::endl;

	std::cout << "5. Exit" << std::endl;

	int choice;

	std::cout << "Choose: ";

	std::cin >> choice;

	return choice;


}

int main() {

	int userchoice = getExpenseAmount();

	std::cout << "Your choice is " << userchoice <<std::endl;

	return 0;

}