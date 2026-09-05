#include<iostream>
#include<cmath>

float square(int a) {

	float sq = std::sqrt(a);

	return sq;

}


int main() {

	int x;

	std::cout << "Enter a number: ";

	std::cin >> x;

	float sq1 = square(x);

	std::cout << "Square: " << sq1 << std::endl;

	return 0;

}