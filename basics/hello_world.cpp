#include <iostream>

long long sumNaturalAdders(int n) {
    long long sum = 0;
    for (int i = 1; ; i++) {
        long long triangularNumber = i * (i + 1) / 2;
        if (triangularNumber > n) {
            break;
        }
        sum += triangularNumber;
    }
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    long long result = sumNaturalAdders(n);
    std::cout << result << std::endl;
    return 0;
}