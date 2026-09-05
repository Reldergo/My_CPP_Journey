#include<iostream>

int add(int x, int y) {

	int sum = x + y;

	return sum;

}

int main() {

	int a, b;

	std::cout << "Enter number 1: ";

	std::cin >> a;

	std::cout << "Enter number 2: ";

	std::cin >> b;

	int sum1 = add(a, b);

	std::cout << "Sum is " << sum1 << std::endl;

	return 0;

}