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
    int* moved_arr = new int[n];
    std::cout << "Enter the value of move: ";
    int move;
    std::cin >> move;
    for (int i = 0; i < n; ++i) {
        moved_arr[i] = arr[(i + n - move) % n];
        std::cout << moved_arr[i] << ' ';
    }

    delete[] arr;
    delete[] moved_arr;
    return 0;
}