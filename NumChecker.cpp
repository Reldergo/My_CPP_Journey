#include<iostream>
#include<algorithm>

int main() {

	int a, b;

	std::cout << "Enter number 1: ";

	std::cin >> a;

	std::cout << "Enter number 2: ";

	std::cin >> b;

	int c = std::max(a, b);

	int d = std::min(a, b);

	std::cout << "Maximum value is " << c << std::endl;

	std::cout << "Minimum value is " << d << std::endl;


	return 0;

}