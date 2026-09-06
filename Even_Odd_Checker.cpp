#include<iostream>

void isEven(int a) {

	if (a == 0) {

		std::cout << "It's 0. Enter a number.";

	}
	else if (a%2 == 0) {
	
		std::cout << "Even";
	
	}
	else {
	
		std::cout << "Odd";

	}

}

int main() {

	int x;

	std::cout << "Enter a number: ";

	std::cin >> x;

	isEven(x);

	return 0;

}