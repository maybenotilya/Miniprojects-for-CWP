#include <iostream>
#include <ctime>


int main() {
	srand(time(NULL));
	double r;
	std::cout << "Enter radius: ";
	std::cin >> r;
	int nMax;
	std::cout << "Enter nMax: ";
	std::cin >> nMax;
	int n = 0, nCircle = 0;
	double x, y;
	while (n < nMax) {
		x = -r + rand() % (int)r * 1.0 + 1.0 * rand()/RAND_MAX;
		y = -r + rand() % (int)r * 1.0 + 1.0 * rand()/RAND_MAX;
		if (x * x + y * y <= r * r) {
			++nCircle;
		}
		++n;
	}
	std::cout << 1.0 * nCircle / n * 4;
}
