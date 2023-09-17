#include <iostream>
int ucln(int m, int n) {
    while (m != n) {
        if (m > n) {
            m = m - n;
        } else {
            n = n - m;
        }
    }
    return m;
}
int main() {
    int m, n;
    std::cin >> m >> n;
    if (m <= 0 || n <= 0) {
        return 1;
    }
    int u = ucln(m, n);
    std::cout << u << std::endl;
    return 0;
}
