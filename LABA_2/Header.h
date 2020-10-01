#pragma once

class IntersectionTwoArrays
{
public:
	IntersectionTwoArrays(int lengthA, int lengthB);

	int* getThirdArray();

	int getSizeOfThirdArray();

	~IntersectionTwoArrays();

private:
	int* arrayA, * arrayB, * arrayAB;
	int  lengthA, lengthB, lengthAB;

	int* dynamicArray(int lengthArray);

	int* initializeArray(int* array, int lengthArray);

	void printArray(int* array, int length);

	int* toIntersectArrays(int& lengthAB);
};
