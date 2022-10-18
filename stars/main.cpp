#include <iostream>


int main() {
    int n, type;
    std::cout << "Enter type of output: ";
    std::cin >> type;
    std::cout << "Enter n: ";
    std::cin >> n;
    switch (type) {
        case 1:
            for(int i = 0; i < n; ++i) {
                for(int j = 0; j < i + 1; ++j) {
                    std::cout << '*';
                }
                std::cout << std::endl;
            } break;
        case 2:
            for(int i = 0; i < n; ++i) {
                for(int j = n - i; j > 0; --j) {
                    std::cout << '*';
                }
                std::cout << std::endl;
            } break;
        case 3:
            for(int i = 0; i < n; ++i) {
                for(int j = 0; j < n - i - 1; ++j) {
                    std::cout << ' ';
                }
				for(int j = 0; j < i + 1; ++j) {
					std::cout << '*';
				}
                std::cout << std::endl;
            }break;
		case 4:
			for(int i = n; i > 0; --i) {
				for(int j = n - i; j > 0; --j) {
					std::cout << ' ';
				}
				for(int j = i; j > 0; --j) {
					std::cout << '*';
				}
				std::cout << std::endl;
			}break;
		case 5:
			for(int i = 0; i < n; ++i) {
				for(int k = 0; k < n - i - 1; ++k) {
					std::cout << ' ';
				}
				for(int k = 0; k < 2 * i + 1; ++k) {
					std::cout << '*';
				}
				std::cout << std::endl;
			}
		case 6:
			for(int i = 0; i < n / 2 + n % 2; ++i) {
				for(int j = 1 - n % 2; j < n / 2 - i; ++j) {
					std::cout << ' ';
				}
				for(int j = 0; j < 2 * i + 1; ++j) {
					std::cout << '*';
				}
				std::cout << std::endl;
			}
			for(int i = n / 2 - 1; i >= 0; --i) {
				for(int j = 1 - n % 2; j < n / 2 - i; ++j) {
					std::cout << ' ';
				}
				for(int j = 0; j < 2 * i + 1; ++j) {
					std::cout << '*';
				}
				std::cout << std::endl;
			}
    }
}