#include <iostream>

void printSmallest(int);

int main() {
	int first_num;
	int second_num;
	std::cout << "Enter the first number: ";
	std::cin >> first_num;
	
	std::cout << "Enter the second number: ";
	std::cin >> second_num;
	
	if (first_num < second_num) {
		printSmallest(first_num);
		return 0;
	}
	printSmallest(second_num);

	return 0;
}

void printSmallest(int num) {
	std::cout << std::endl << "The smaller of the two is " << num << std::endl;
}
