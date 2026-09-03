#include<iostream>
#include<string>

int main(){

	std::string n;

	std::cout << "Enter password: ";

	std::cin >> n;

	while (n != "Kaiser141") {
	
		std::cout << "Incorrect password! Try again." << std::endl;

		std::cout << "Enter password: ";

		std::cin >> n;
	
	}

	std::cout << "Welcome!";

	return 0;

}