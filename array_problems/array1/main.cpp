#include <iostream>
#include <ctime>


int* createArray(int n) {
    int *arr = new int[n];
    return arr;
}

void fillArray(int* arr, int n, int a = 10, int b = 100) {
    for (int i = 0; i < n; ++i) {
        *(arr + i) = rand()%b + a;
    }
}

void arrayOut (int* arr, int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << *(arr + i) << ' ';
    }
}

int main () {
    srand(time(nullptr));
    int n = 5;
    int* A = createArray(n);
    fillArray(A, n);
    arrayOut(A, n);
    delete[] A;
    return 0;
}