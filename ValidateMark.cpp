#include<iostream>

bool isValidMark(int a) {

	if (a>=0 && a <= 100) {
	
		return true;

	}
	
	else {
	
		return false;

	}

}

int main() {

	int n;
	
	std::cout << "Enter mark: ";

	std::cin >> n;

	bool varify = isValidMark(n);

	if (varify) {
	
		std::cout << "Valid mark.";
	
	}

	else {
	
		std::cout << "Invalid mark";

	}

	return 0;

}