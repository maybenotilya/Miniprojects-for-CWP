#include <iostream>



int main () {
    std::cout << "Enter rows and columns: ";
    int r, c;
    std::cin >> r >> c;
    int** M = new int* [r];
    for(int i = 0; i < r; ++i) {
        M[i] = new int [c];
    }

    for(int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            M[i][j] = 1 + c * i + j;
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