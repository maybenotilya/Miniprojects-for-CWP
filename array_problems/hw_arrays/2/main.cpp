#include <iostream>



int main () {
    std::cout << "Enter n: ";
    int n;
    std::cin >> n;
    std::cout << "Enter array: ";
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    int index = 0;
    int* new_arr = new int[n];
    std::cout << "Enter A: ";
    int A;
    std::cin >> A;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < A) {
            new_arr[index] = arr[i];
            ++index;
        }
    }

    for (int i = 0; i < n; ++i) {
        if (arr[i] >= A) {
            new_arr[index] = arr[i];
            ++index;
        }
    }

    for (int i = 0; i < n; ++i) {
        std::cout << new_arr[i] << ' ';
    }
    
    delete[] arr;
    delete[] new_arr;
    return 0;
}