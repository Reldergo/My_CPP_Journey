#include <iostream>

int main() {
    int N;
    std::cout << "Enter N: ";
    std::cin >> N;

    long long sum = 0;

    if (N <= 3) {
        for (int i = 1; i <= N; ++i) {
            sum += i;
            std::cout << i << (i == N ? "" : " + ");
        }
    }
    else {
        for (int i = 1; i <= N; ++i) {
            sum += i;
        }
        std::cout << "1 + 2 + 3 + ... + " << N;
    }

    std::cout << " = " << sum << std::endl;

    return 0;
}