#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int a = (n / 10000) % 10;
    int b = (n / 1000) % 10;
    int c = (n / 100) % 10;
    int d = (n / 10) % 10;
    int e = n % 10;

    if (a == 1) std::cout << "만 ";
    else if (a > 1) std::cout << a << "만 ";

    if (b == 1) std::cout << "천 ";
    else if (b > 1) std::cout << b << "천 ";

    if (c == 1) std::cout << "백 ";
    else if (c > 1) std::cout << c << "백 ";

    if (d == 1) std::cout << "십 ";
    else if (d > 1) std::cout << d << "십 ";

    if (e > 0) std::cout << e;

    std::cout << std::endl;

    return 0;
}