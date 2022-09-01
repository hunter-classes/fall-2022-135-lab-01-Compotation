#include <iostream>

int main() {
	int year;
	std::cout << "Enter year: ";
	std::cin >> year;
	std::cout << std::endl;

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
