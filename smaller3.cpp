#include <iostream>

void printSmallest(int);

int main() {
	int first_num;
	int second_num;
	int third_num;
	std::cout << "Enter the first number: ";
	std::cin >> first_num;
	
	std::cout << "Enter the second number: ";
	std::cin >> second_num;

	std::cout <<  "Enter the third number: ";
	std::cin >> third_num;
	
	if (first_num < second_num && first_num < third_num) {
		printSmallest(first_num);
		return 0;
	}

	if (second_num < third_num && second_num < third_num) {
		printSmallest(second_num);
		return 0;
	}
	printSmallest(third_num);

	return 0;
}

void printSmallest(int num) {
        std::cout << std::endl << "The smaller of the three is " << num << std::endl;
}

