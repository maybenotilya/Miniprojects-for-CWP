#include <iostream>
#include <iomanip>
#include <cmath>


int main() {
	double pi = 0;
	int k = 1;
	int n;
	std::cin >> n;
	for(int i = 1; i < pow(10, n); i = i + 2) {
		pi += 1.0 * k / i;
		k = k == 1 ? -1 : 1;
	}
	pi *= 4;
	std::cout << std::setprecision(15) << pi;
}
