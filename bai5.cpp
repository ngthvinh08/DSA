#include <iostream>
int main() {
    double num1, num2, num3, num4, num5;
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5;
    double smallest = num1;
    double greatest = num1;
    if (num2 < smallest) {
        smallest = num2;
    }
    if (num2 > greatest) {
        greatest = num2;
    }
    if (num3 < smallest) {
        smallest = num3;
    }
    if (num3 > greatest) {
        greatest = num3;
    }
    if (num4 < smallest) {
        smallest = num4;
    }
    if (num4 > greatest) {
        greatest = num4;
    }
    if (num5 < smallest) {
        smallest = num5;
    }
    if (num5 > greatest) {
        greatest = num5;
    }
    double sum = smallest + greatest;
    std::cout << sum << std::endl;
    return 0;
}
