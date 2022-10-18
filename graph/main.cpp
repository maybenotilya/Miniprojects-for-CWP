#include <iostream>
//<3

int main() {
	int height = 21, width = 41;
	for (double y = 1.5; y >= -1.5; y = y - 3.0 / height) {
		for (double x = - 1.5; x <= 1.5; x = x + 3.0 / width) {
			if ((x * x + y * y - 1) * (x * x + y * y - 1) * (x * x + y * y - 1) - x * x * y * y * y <= 0) {
				std::cout << '*';
			} else {
				std::cout << '.';
			}
		}
		std::cout << std::endl;
	}
}
