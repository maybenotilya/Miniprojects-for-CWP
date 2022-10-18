#include <iostream>
#include <vector>

int main() {
	std::cout << "Enter a number: ";
	int n;
	std::cin >> n;
	std::vector <int> result;
	while (n > 0) {
		result.push_back(n % 2);
		n /= 2;
	}
	std::reverse(result.begin(), result.end());
	for (int num : result) {
		std::cout << num;
	}
}