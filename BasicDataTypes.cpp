#include<iostream>
#include <cstdio>

int main (){

    int a;

    long b;

    char c;

    float d;

    double e;

    std::cout << "Enter an integer: ";
    scanf("%d", &a);

    std::cout << "Enter a long: ";
    scanf("%ld", &b);

    std::cout << "Enter a char: ";
    scanf(" %c", &c);

    std::cout << "Enter a float: ";
    scanf("%f", &d);

    std::cout << "Enter a double: ";
    scanf("%lf", &e);


    printf("Int: %d\n", a);

    printf("Long: %ld\n", b);

    printf("Char: %c\n", c);

    printf("Float: %.3f\n", d);

    printf("Double: %.9f", e);

    return 0;

}
