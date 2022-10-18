#include <iostream>


int main() {
	double pi = 0;
	int k = 1;
	for(int i = 1; i < 10e7; i = i + 2) {
		pi += 1.0 * k / i;
		k = k == 1 ? -1 : 1;
	}
	pi *= 4;
	std::cout << pi;
}
