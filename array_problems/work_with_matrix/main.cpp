#include <iostream>
#include "../../IMPORT_FUNCTIONS/MatrixOperations.h"



int main () {
    size_t n;
    std::cin >> n;
    int** arr = new int * [n];
    for (int i = 0; i < n; ++i) {
        arr[i] = new int[n];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cin >> arr[i][j];
        }
    }
    int ** m2 = multiplyMatrix(arr, n, n, arr, n, n);
    printMatrix(m2, n, n);
}