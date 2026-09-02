#include <iostream>

int main()
{
    int i;

    std::cout << "Enter a number (1 to 3) (4 to exit)" << std::endl;

    do {
        std::cin >> i;

        switch (i) {

        case 1:
            std::cout << "Hello" << std::endl;
            break;
        case 2:
            std::cout << "Goodbye" << std::endl;
            break;
        case 3:
            std::cout << "You are smart" << std::endl;
            break;
        case 4:
            std::cout << "Turning off";
            break;
        default:
            std::cout << "Wrong number" << std::endl;

        }

    } while (i != 4);
}