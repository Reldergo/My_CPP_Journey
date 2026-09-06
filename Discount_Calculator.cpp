#include<iostream>

double discountCalculator(double p, int q) {

	double disprice = p * (q / 100.0);

	double price2 = p - disprice;

	return price2;

}

int main() {

	double p1;

	int dis;

	std::cout << "Enter price: ";

	std::cin >> p1;

	std::cout << "Enter the amount of discount: ";

	std::cin >> dis;

	double p2 = discountCalculator(p1, dis);

	std::cout << "Updated price: "<< p2 << std::endl;

	return 0;

}