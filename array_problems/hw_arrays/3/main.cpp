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

    int more_last = 0, less_last = 0;

    for(int i = 0; i < n - 1; ++i) {
        more_last += arr[i + 1] > arr[i];
        less_last += arr[i + 1] < arr[i];
    }
    if (more_last > 0 && less_last == 0) {
        std::cout << "Sorted in ascending order";
    } else if (less_last > 0 && more_last == 0) {
        std::cout << "Sorted in descending order";
    } else if(less_last == 0 && more_last == 0) {
        std::cout << "All values are equal";
    } else {
        std::cout << "Not sorted";
    }
    
    return 0;
}