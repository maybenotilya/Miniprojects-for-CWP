#include <iostream>
#include <ctime>


void fillArray(int** M, int r, int c, int limit = 10e5) {
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j){
            M[i][j] = rand() % limit;
        }
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
    std::cout << "Enter limit of random numbers: ";
    int limit;
    std::cin >> limit;
    fillArray(M, r, c, limit);

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j){
            std::cout << M[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < r; ++i) {
        delete[] M[i];
    }
    delete[] M;
    return 0;
}