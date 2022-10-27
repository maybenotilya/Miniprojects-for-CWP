#include <iostream>



int main () {
    int n;
    std::cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }
    for (int i = 1; i < n - 1; ++i) {
        if (2 * arr[i] > arr[i - 1] + arr[i + 1]) {
            std::cout << "Element number " << i + 1 << " is local maximum with value of " << arr[i];
            delete[] arr;
            return 0;
        }
    }
    
    std::cout << "No local maximum was found";
    delete[] arr;
    return 0;
}