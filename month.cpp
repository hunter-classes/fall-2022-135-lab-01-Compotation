#include <iostream>

int main() {
	int year, month;
	std::cout << "Enter year: ";
	std::cin >> year;

	std::cout << "Enter month: ";
	std::cin >> month;

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		std::cout << "31" << std::endl;
	}
	return 0;
}
