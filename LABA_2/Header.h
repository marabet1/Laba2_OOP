#pragma once

class Intersection
{
public:
	Intersection(int lengthA, int lengthB);

	Intersection(const Intersection& object);

	int* getThirdArray();

	int getSizeOfThirdArray();

	~Intersection();

private:
	int* arrayA, * arrayB, * arrayAB;
	int  lengthA, lengthB, lengthAB;

	int* dynamicArray(int lengthArray);

	int* initializeArray(int* array, int lengthArray);

	int* toIntersectArrays(int& lengthAB);
};

void printArray(int*, int);

