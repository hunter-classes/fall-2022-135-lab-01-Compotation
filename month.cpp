#include <iostream>

int main() {
	int year, month;
	std::cout << "Enter year: ";
	std::cin >> year;

	std::cout << "Enter month: ";
	std::cin >> month;

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
		std::cout << "31" << std::endl;
	} else if (month == 4 || month == 6 || month == 9 || month == 11) {
		std::cout << "30" << std::endl;
	} else {
		if (year % 100 == 0) {
                	if (year % 400 == 0) {
				std::cout << "29" << std::endl;
                	} else {
				std::cout << "28" << std::endl;
			}
        	} else if (year % 4 == 0) {
			std::cout << "29" << std::endl;
        	} else {
			std::cout << "28" << std::endl;
		}
	}
	return 0;
}

