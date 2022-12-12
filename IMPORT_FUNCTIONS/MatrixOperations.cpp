#include <iostream>
#include <ctime>


template <typename T>
T** createMatrix(const size_t &r, const size_t &c) {
    T** matrix = new T * [r];
    for (int i = 0; i < r; ++i) {
        matrix[i] = new T[c];
    }
    return matrix;
}


template <typename T>
void fillMatrixWithRandomIntegers (T** matrix, const size_t &r, const size_t &c, const int &limit = 5000) {

    srand(time(nullptr));

    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            matrix[i][j] = rand() % limit;
        }
    }

}


template <typename T>
void printMatrix (T ** matrix, const size_t &r, const size_t &c) {
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            std::cout << matrix[i][j] << ' ';
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}


template <typename T>
void clearMatrixMemory (T ** matrix, const size_t &r, const size_t &c) {
    for (int i = 0; i < r; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}



template <typename T>
void transpouseMatrix (T ** matrix, const size_t &n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            std::swap(matrix[i][j], matrix[j][i]);
        }
    }
}


template <typename T>
T** multiplyMatrix(T** matrix1, const size_t &r1, const size_t &c1, T** matrix2, const size_t &r2, const size_t &c2) {
    if (c1 != r2) {
        throw 1;
    }
    T ** result_matrix = createMatrix(r1, c2);
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            T value = 0;
            for (int k = 0; k < r1; ++k) {
                value += matrix1[i][k] * matrix2[k][j];
            }
            result_matrix[i][j] = value;
        }
    }
    return result_matrix;
}


template <typename T>
void fillEMatrix (T ** matrix, const size_t &n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = j == i ? (T) 1 : 0;
        }
    }
}


template <typename T>
void matrixSwap(T ** matrix, const size_t &r, const size_t &c, const size_t &swapIndex1, const size_t &swapIndex2, bool isColumns = true) {
    if (isColumns) {
        for (int i = 0; i < r; ++i) {
            std::swap(matrix[i][swapIndex1 - 1], matrix[i][swapIndex2 - 1]);
        }
    } else {
        for (int i = 0; i < c; ++i) {
            std::swap(matrix[swapIndex1 - 1][i], matrix[swapIndex2 - 1][i]);
        }
    }
}






// int main () {
//     int r = 5, c = 6;
//     int** arr = createMatrix(r, c);
//     fillMatrixWithRandomIntegers(arr, r, c);
//     printMatrix(arr, r, c);
//     clearMatrixMemory(arr, r, c);
//     return 0;
// }

