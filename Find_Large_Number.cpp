#include<iostream>
#include<algorithm>

int findLarger(int a, int b) {

	int z = std::max(a , b);

	return z;

}

int main() {

	int x, y;

	std::cout << "Enter number 1: ";

	std::cin >> x;

	std::cout << "Enter number 2: ";

	std::cin >> y;

	int l = findLarger(x , y);

	std::cout << "Larger number is: " << l;

	return 0;

}