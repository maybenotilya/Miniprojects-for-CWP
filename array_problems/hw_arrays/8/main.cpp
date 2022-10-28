#include <iostream>



int main () {
    std::cout << "Enter rows and columns: ";
    int r, c;
    std::cin >> r >> c;
    int** M = new int* [r];
    for(int i = 0; i < r; ++i) {
        M[i] = new int [c];
    }

    for(int i = 0, sign = 1; i < r; sign = -sign, ++i) {
        for (int j = 0; j < c; ++j) {
            if (sign == 1) {
                M[i][j] = 1 + c * i + j;
            } else {
                M[i][j] = c * i + r - j;
            }
        }
    }

    for(int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << M[i][j] << ' ';
        }
        std::cout << std::endl;
    }


    for(int i = 0; i < r; ++i) {
        delete[] M[i];
    }
    delete[] M;
    
    return 0;
}