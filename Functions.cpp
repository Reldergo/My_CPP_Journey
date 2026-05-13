#include<iostream>
#include<algorithm>

int max_of_four(int a, int b, int c, int d);

int main(){

    int a, b, c, d;

    std::cin >> a;

    std::cin >> b;

    std::cin >> c;

    std::cin >> d;

    int z = max_of_four(a, b, c, d);

    std::cout << z;

    return 0;

}

    int max_of_four(int a, int b, int c, int d){

    return std::max({a, b, c, d});

    }
