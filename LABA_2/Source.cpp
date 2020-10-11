#include <iostream>
#include "Header.h"

int main() {

	Intersection obj1(5, 4);
	Intersection obj2(obj1);

	int *arrayAB = obj2.getThirdArray();
	int lengthAB = obj2.getSizeOfThirdArray();

	for (int i = 0; i < lengthAB; i++)
	{
		std::cout << arrayAB[i];
	}

	return 0;
}























// Перегрузка операторов
// Создать класс string для работы со строками. Перегрузить операции +, +=, =, ==, >, <, [],
// выделение строки int С каого символа, int по какой и получить выделенную строку. 