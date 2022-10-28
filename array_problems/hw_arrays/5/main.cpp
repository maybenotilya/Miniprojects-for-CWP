#include <iostream>
#include <ctime>
#include <iomanip>

void fillArray(int** M, int r, int c, int limit = 10e5) {
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j){
            M[i][j] = rand() % limit;
        }
    }
}

void printArray (int** M, int r, int c, int width = 5) {
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j){
            std::cout << std::setw(width) << std::left << M[i][j]  << ' ';
        }
        std::cout << std::endl;
    }
}


int main () {

    srand(time(nullptr));

    std::cout << "Enter rows and columns: ";
    int r, c;
    std::cin >> r >> c;
    int** M = new int* [r];
    for (int i = 0; i < r; ++i) {
        M[i] = new int[c];
    }
    
    fillArray(M, r, c);
    printArray(M, r, c);

    
    for (int i = 0; i < r; ++i) {
        delete[] M[i];
    }
    delete[] M;
    return 0;
}