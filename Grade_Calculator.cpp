#include <iostream>

char calculateGrade(int a) {

	int x;

	if (a <= 100 && a >= 80) {

		return 'A';

			}
	else if (a <= 79 && a >= 70) {

		return 'B';

			}
	else if (a <= 69 && a >= 60) {

		return 'C';

			}
	else if (a <= 59 && a >= 50) {

		return 'D';

			}
	else {

		return 'F';

			}

}

int main() {

	int n;

	std::cout << "Enter marks: ";

	std::cin >> n;

	if (n < 0 || n > 100) {

		std::cout << "Invalid mark.";

	}

	else {

		char grade = calculateGrade(n);

		std::cout << "Grade: " << grade;

	}

	return 0;

}