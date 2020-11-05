#pragma once
#include <iostream>

class Intersection
{
public:
	Intersection();
	Intersection(int length);
	Intersection(const Intersection& object);
	~Intersection();

	int* getArray();
	int getLength();
	void setArray(int* array);

	Intersection toIntersectArrays(const Intersection& object);

	int& operator [] (const int index);

private:
	int* array;
	int length;
};

