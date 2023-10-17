#include <iostream>
#include <cmath>

int bin_to_dec(n) {
	int long long s_n;
	int count_pow = 0;
	while (n) {
		s_n = (n % 2) * pow(10, count_pow);
		n /= 2;
		count_pow++
	}
	return s_n;
}

int main() {
	int n;
	std::cout << "Input number: ";
	std::cin >> n;
	std::cout << "On binary: ";
	std::cout << bin_to_dec(n) << std::endl;
}