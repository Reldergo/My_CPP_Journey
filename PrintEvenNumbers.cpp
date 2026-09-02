#include<iostream>

int main() {

	int i = 1;

	while (i <= 100) {

		if (i % 2 == 0) {

			std::cout << i << std::endl;

		}

		i++;

	}

	return 0;

}