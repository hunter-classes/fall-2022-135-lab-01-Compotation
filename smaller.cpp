#include <iostream>

int main() {
	int first_num;
	int second_num;
	std::cout << "First number: ";
	std::cin >> first_num;
	
	std::cout << "Second number: ";
	std::cin >> second_num;
	
	if (first_num < second_num) {
		std::cout << first_num << std::endl;
		return 0;
	}
	std::cout << second_num << std::endl;

	return 0;
}
