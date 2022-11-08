#include <iostream>
#include <ctime>



int** createMatrix(const size_t &r, const size_t &c) {
    int** matrix = new int * [r];
    for (int i = 0; i < r; ++i) {
        matrix[i] = new int[c];
    }
    return matrix;
}


void fillMatrixWithRandomIntegers (int** matrix, const size_t &r, const size_t &c, const int &limit = 5000) {

    srand(time(nullptr));

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            matrix[i][j] = rand() % limit;
        }
    }

}


void printMatrix (int ** matrix, const size_t &r, const size_t &c) {
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }
}


void clearMatrixMemory (int ** matrix, const size_t &r, const size_t &c) {
    for (int i = 0; i < r; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}



void transpouseMatrix (int** matrix, const size_t &n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = tmp;
        }
    }
}


int** multiplyMatrix(int** matrix1, const size_t &r1, const size_t &c1, int** matrix2, const size_t &r2, const size_t &c2) {
    if (c1 != r2) {
        throw 1;
    }
    int ** result_matrix = createMatrix(r1, c2);
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            int value = 0;
            for (int k = 0; k < r1; ++k) {
                value += matrix1[i][k] * matrix2[k][j];
            }
            result_matrix[i][j] = value;
        }
    }
    return result_matrix;
}









// int main () {
//     int r = 5, c = 6;
//     int** arr = createMatrix(r, c);
//     fillMatrixWithRandomIntegers(arr, r, c);
//     printMatrix(arr, r, c);
//     clearMatrixMemory(arr, r, c);
//     return 0;
// }

