#include<iostream>

int main() {

	int n;

	std::cout << "Enter a number between 1 to 10: ";

	std::cin >> n;

	while (n>10 || n<1) {

		std::cout << "Enter a number between 1 to 10: ";
	
		std::cin >> n;
	
	}

	std::cout << "Accepted";

	return 0;

}