#include<iostream>

int main(){

    int a, b, c, d;

    std::cout << "*********Enter three integers*********" << std::endl;

    std::cout << "Enter integer 1: ";
    std::cin >> a;

    std::cout << "Enter integer 2: ";
    std::cin >> b;

    std::cout << "Enter integer 3: ";
    std::cin >> c;

    d = a + b +c;

    std::cout << "Sum: " << d;

}
