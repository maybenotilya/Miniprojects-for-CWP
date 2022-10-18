#include <iostream>

int main () {
    int h1, m1, s1, h2, m2, s2;
    std::cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
    int t1 = 3600 * h1 + 60 * m1 + s1, t2 = 3600 * h2 + 60 * m2 + s2;
    int d = abs(t2 - t1);
    if (t1 > t2) {
        d = 3600 * 24 - (t1 - t2);
    }
    std::cout << d / 3600 << ':' << (d % 3600) / 60 << ':' << (d % 60);
}