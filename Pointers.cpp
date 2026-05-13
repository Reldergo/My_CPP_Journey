#include<iostream>

void update (int *a, int *b);

int main(){

    int a, b;

    int *p = &a;

    int *c = &b;

    std::cin >> a;

    std::cin >> b;

    update(&a, &b);

    std::cout << a << std::endl;

    std::cout << b;

    return 0;

}

void update (int *a, int *b){

    int sum = *a + *b;

    int diff = (a > b) ? (*a - *b) : (*b - *a);

    *a = sum;

    *b = diff;

}
