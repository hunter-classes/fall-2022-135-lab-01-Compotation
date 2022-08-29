#include <iostream>

int main() {
	int year;
	std::cout << "What is your year? ";
	std::cin >> year;

	if (year % 100 == 0) {
		if (year % 400 == 0) {
			std::cout << "Leap year" << std::endl;
			return 0;
		}
		std::cout << "Common year" << std::endl;
		return 0;
	}
	if (year % 4 == 0) {
		std::cout << "Leap year" << std::endl;
		return 0;
	}
	std::cout << "Common year" << std::endl;
	return 0;
	
}
