#include<iostream>

int main(){

	int n;

	std::cout << "Enter a positive number: ";

	std::cin >> n;

	while (n == 0 || n < 0) {

		if (n == 0) {

			std::cout << "That's a 0. Try again." << std::endl;

			std::cout << "Enter a positive number: ";

			std::cin >> n;

		}

		else {


			std::cout << "That's a negative number. Try again." << std::endl;

			std::cout << "Enter a positive number: ";

			std::cin >> n;

		}
	
	}

	std::cout << "Accepted";

}