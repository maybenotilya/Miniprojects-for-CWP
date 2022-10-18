#include <iostream>

int main() {
	int num;
	std::cout << "Enter ticket's number: ";
	std::cin >> num;
	int lsum = 0, rsum = 0;
	for(int i = 0; i < 3; ++i) {
		rsum += num % 10;
		num /= 10;
	}
	for(int i = 0; i < 3; ++i) {
		lsum += num % 10;
		num /= 10;
	}
	if (rsum == lsum) {
		std::cout << "True";
	} else {
		std::cout << "False";
	}
}
