#include <iostream>


int main() {
	std::cout << "Enter a radius: ";
	double r;
	std::cin >> r;
	int count = 0;
	for (int x = 0; x <= (int) r + 1; ++x){
		for (int y = 0; y <= (int) r + 1; ++y) {
			if (x * x + y * y <= r * r) {
				++count;
			}
		}
	}
	std::cout << count;

}
