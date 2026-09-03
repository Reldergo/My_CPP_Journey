#include<iostream>

int main() {

	int n;

	int mul = 1;

	std::cout << "Enter a number: ";

	std::cin >> n;

	for (int i = 1; i <= 10; i++) {

		mul = n * i;

		std::cout << n << "X" << i << "=" << mul << std::endl;
	}

}