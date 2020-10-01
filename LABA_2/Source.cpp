#include <iostream>
#include "Header.h"

int main() {
	int lengthA, lengthB, lengthAB, *arrayAB;

	std::cin >> lengthA >> lengthB;

	IntersectionTwoArrays intersection(lengthA, lengthB);

	arrayAB = intersection.getThirdArray();
	lengthAB = intersection.getSizeOfThirdArray();
	
	std::cout << std::endl;
	for (int i = 0; i < lengthAB; i++)
		std::cout << arrayAB[i] << ", ";

	return 0;
}