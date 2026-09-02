#include<iostream>
#include<ctime>

int main() {

	int i;

	std::cout << "Enter a number to countdown: ";

	std::cin >> i;

	while (i >= 1) {

		std::cout << i << std::endl;

		i--;

	}

	return 0;

}