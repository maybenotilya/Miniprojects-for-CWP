#include <iostream>


int main () {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    int *A = new int[n];
    std::cout << "Enter array of " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> *(A + i);
    }
    int s = n*(n  + 1) / 2;
    int array_s = 0;
    for (int i = 0; i < n; ++i) {
        array_s += *(A + i);
    }
    std::cout << "Missing number is " << s - array_s;
    delete[] A;
    return 0;
}