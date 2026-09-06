#include<iostream>

double calculateAverage(int l, int m, int n) {

	double p = (l + m + n) / 3;

	return p;

}

int main() {

	int x, y, z;

	std::cout << "Maximum limit is 3 numbers." << std::endl;

	std::cout << "Enter number 1: ";

	std::cin >> x;

	std::cout << "Enter number 2: ";

	std::cin >> y;

	std::cout << "Enter number 3: ";

	std::cin >> z;

	double q = calculateAverage(x, y, z);

	std::cout << "Average is " << q << std::endl;

	return 0;

}