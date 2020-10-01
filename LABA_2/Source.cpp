#include <iostream>
#include "Header.h"

int main() {
	int lengthA, lengthB, lengthAB, *arrayAB;

	std::cin >> lengthA >> lengthB;

	Intersection obj1(lengthA, lengthB);
	arrayAB = obj1.getThirdArray();
	lengthAB = obj1.getSizeOfThirdArray();
	
	printArray(arrayAB, lengthAB);

	return 0;
}























// Перегрузка операторов
// Создать класс string для работы со строками. Перегрузить операции +, +=, =, ==, >, <, [],
// выделение строки int С каого символа, int по какой и получить выделенную строку. 