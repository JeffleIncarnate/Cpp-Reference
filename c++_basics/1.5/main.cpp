#include <iostream>

void addNums() {
    double a=0;
    double b=0;

    std::cout << "Add number 1: ";
    std::cin >> a;
    std::cout << "Add number 2: ";
    std::cin >> b;
    double total = a + b;
    std::cout << a << '+' << b << '=' << total << '\n';
}

int main() {
    addNums();
    return 0;
}
