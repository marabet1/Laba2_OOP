#pragma once

class Intersection
{
public:
	Intersection(int lengthA, int lengthB);
	Intersection(const Intersection& object);
	~Intersection();

	int* getThirdArray();
	int getSizeOfThirdArray();

	int* dynamicArray(int lengthArray);
	int* setArray(int* array, int lengthArray);
	void toIntersectArrays();

private:
	int *arrayA,
		*arrayB,
		*arrayAB;

	int lengthA,
		lengthB,
		lengthAB;
};

