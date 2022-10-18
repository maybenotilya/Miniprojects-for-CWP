#include <iostream>
#include <cmath>

double calc (double x, unsigned int n, double s) {
	if (n == 0) {
		return s;
	} else {
		x = sin(x);
		return calc(x, n - 1, s + x);
	}
}


int main () {
	unsigned int n;
	double x;
	std::cout << "Enter x: ";
	std::cin >> x;
	std::cout << "Enter n: ";
	std::cin >> n;
	double res = 0;
	res = calc(x, n, 0);
	std::cout << "Res in equal to " << res;
	return 0;
}