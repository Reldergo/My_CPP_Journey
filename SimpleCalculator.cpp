#include <iostream>

int main() {

    int a, b;

    std::cout << "Enter number 1: ";
    std::cin >> a;

    std::cout << "Enter number 2: ";
    std::cin >> b;

    char c;

    std::cout << "Enter an operator (+,-,/,*): ";
    std::cin >> c;

    switch (c) {

    case '+': {
        int sum = a + b;

        std::cout << "Sum: " << sum << std::endl;
        break;
    }

    case '-': {
        int sub = a - b;

        std::cout << "Sub: " << sub << std::endl;
        break;
    }

    case '*': {
        int mul = a * b;

        std::cout << "Mul: " << mul << std::endl;
        break;
    }

    case '/': {
        if (b == 0) {

            std::cout << "Cannot divide by zero." << std::endl;

        }
        else {

            int div = a / b;

            std::cout << "Div: " << div << std::endl;

        }

        break;
    }

    default:
        std::cout << "Wrong input" << std::endl;
    }

    return 0;
}