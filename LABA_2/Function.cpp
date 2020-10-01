#include <iostream>
#include "Header.h"

Intersection::Intersection(int lengthA, int lengthB)
{
	this->lengthA = lengthA;
	this->lengthB = lengthB;

	arrayA = dynamicArray(lengthA);
	arrayB = dynamicArray(lengthB);
	arrayAB = dynamicArray(lengthA);

	arrayA = initializeArray(arrayA, lengthA); 
	arrayB = initializeArray(arrayB, lengthB);

	arrayAB = toIntersectArrays(lengthAB);
}

Intersection::Intersection(const Intersection& object)
{
	this->lengthAB = object.lengthAB;
	this->arrayAB = new int[lengthAB];

	for (int i = 0; i < object.lengthAB; i++)
	{
		this->arrayAB[i] = object.arrayAB[i];
	}
}

Intersection::~Intersection()
{
	delete[] arrayA;
	delete[] arrayB;
	delete[] arrayAB;
}

int* Intersection::getThirdArray() {
	return arrayAB;
}

int Intersection::getSizeOfThirdArray() {
	return lengthAB;
}

int* Intersection::dynamicArray(int lengthArray) {
	int* array = new int[lengthArray];
	return array;
}

int* Intersection::initializeArray(int* array, int lengthArray) {

	for (int i = 0; i < lengthArray; i++) {
		std::cin >> array[i];
	}
	return array;
}

int* Intersection::toIntersectArrays(int& lengthAB) {

	int* arrayTemp;
	arrayTemp = dynamicArray(lengthA);
	int counterForTempArray = 0;
	for (int i = 0; i < lengthA; i++) {
		int j;
		for (j = 0; j < i; j++) {
			if (arrayA[i] == arrayA[j])
				break;
		}
		if (j == i)
			arrayTemp[counterForTempArray++] = arrayA[i];
	}
	for (int i = 0; i < counterForTempArray; i++) {
		bool isNumberFound = false;
		for (int j = 0; j < lengthB; j++) {
			if (arrayTemp[i] == arrayB[j]) {
				isNumberFound = true;
			}
		}
		if (isNumberFound) {
			arrayAB[lengthAB++] = arrayTemp[i];
		}
	}
	delete[] arrayTemp;
	return arrayAB;
}

void printArray(int* array, int length) {

	for (int i = 0; i < length; i++) {
		std::cout << array[i] << ", ";
	}
	std::cout << std::endl;
}