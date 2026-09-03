#include<iostream>

int main() {

	int a, b, sum;

	char c;

	do {
	
		std::cout << "Enter number 1: ";

		std::cin >> a;

		std::cout << "Enter number 2: ";

		std::cin >> b;

		sum = a + b;

		std::cout << sum << std::endl;

		std::cout << "Calculate again? (y/n)";

		std::cin >> c;

	
	} while (c == 'y');

	return 0;

}