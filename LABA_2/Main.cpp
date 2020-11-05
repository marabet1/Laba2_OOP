#include <iostream>
#include "Header.h"

using namespace std;

int main() {

	const int lengthA = 5;

	Intersection arrayA(lengthA);

	cout << "ArrayA, size = 5: " << endl;
	for (int i = 0; i < lengthA; i++)
	{
		cin >> arrayA[i];
	}

	const int lengthB = 4;

	Intersection arrayB(lengthB);

	cout << "ArrayB, size = 4: " << endl;

	for (int i = 0; i < lengthB; i++)
	{
		cin >> arrayB[i];
	}	

	cout << endl << "ArrayA: " << endl;

	for (int i = 0; i < lengthA; i++)
	{
		cout << arrayA[i] << " ";
	}

	cout << endl << "ArrayB: " << endl;

	for (int i = 0; i < lengthB; i++)
	{
		cout << arrayB[i] << " ";
	}

	Intersection intersection = arrayA.toIntersectArrays(arrayB);

	cout << endl << "Intersected ArrayA and ArrayB: " << endl;

	for (int i = 0; i < intersection.getLength(); i++)
	{
		cout << intersection[i] << " ";
	}

	return 0;
}























// Перегрузка операторов
// Создать класс string для работы со строками. Перегрузить операции +, +=, =, ==, >, <, [],
// выделение строки int С каого символа, int по какой и получить выделенную строку. 