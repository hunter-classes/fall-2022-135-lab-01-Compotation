#include <iostream>

int main() {
	int first_num;
	int second_num;
	int third_num;
	std::cout << "First number: ";
	std::cin >> first_num;
	
	std::cout << "Second number: ";
	std::cin >> second_num;

	std::cout <<  "Third number: ";
	std::cin >> third_num;
	
	if (first_num < second_num && first_num < third_num) {
		std::cout << first_num << std::endl;
		return 0;
	}

	if (second_num < third_num && second_num < third_num) {
		std::cout << second_num << std::endl;
		return 0;
	}
	std::cout << third_num << std::endl;

	return 0;
}
