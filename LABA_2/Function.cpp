#include <iostream>
#include "Header.h"

Intersection::Intersection()
{
	this->length = 10;
	this->array = new int[10];
}

Intersection::Intersection(int length)
{
	this->length = length;
	this->array = new int[length];
}

Intersection::Intersection(const Intersection& object)
{
	this->length = object.length;
	this->array = new int[length];

	for (int i = 0; i < object.length; i++)
	{
		this->array[i] = object.array[i];
	}
}

Intersection::~Intersection()
{
	delete[] array;
}

int* Intersection::getArray()
{
	return this->array;
}

int Intersection::getLength()
{
	return this->length;
}

void Intersection::setArray(int* array)
{
	this->array = array;
}

Intersection Intersection::toIntersectArrays(const Intersection& object)
{
	int lengthTemp;

	if (this->length < object.length)
	{
		lengthTemp = this->length;
	}
	else
	{
		lengthTemp = object.length;
	}

	int count = 0;
	Intersection temp(lengthTemp);

	for (int i = 0; i < this->length; i++)
	{
		for (int j = 0; j < object.length; j++)
		{
			if (this->array[i] == object.array[j])
			{
				temp.array[count++] = this->array[i];
				break;
			}
		}
	}
	temp.length = count;
	return temp;
}

int& Intersection::operator[](const int index)
{
	return array[index];
}
