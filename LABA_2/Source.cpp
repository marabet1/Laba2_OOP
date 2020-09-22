#include <iostream>

class Intersection
{
  public:
	Intersection(int n1, int n2)
	{
		lengthFirstArray = n1;
		lengthSecondArray = n2;
	
		firstArray = dynamicArray(lengthFirstArray);
		secondArray = dynamicArray(lengthSecondArray);
		thirdArray = dynamicArray(lengthFirstArray);

		firstArray = initializeArray(firstArray, lengthFirstArray);
		secondArray = initializeArray(secondArray, lengthSecondArray);
		thirdArray = toIntersectArrays(lengthThirdArray);
	}

	int* getThirdArray() {
		return thirdArray;
	}

	int getSizeOfThirdArray() {
		return lengthThirdArray;
	}
	
	~Intersection()
	{
		delete[] firstArray;
		delete[] secondArray;
		delete[] thirdArray;
	}

  private:
	
	int* firstArray, * secondArray, * thirdArray;
	int  lengthFirstArray, lengthSecondArray, lengthThirdArray;

	int* dynamicArray(int lengthArray) {
		int* array = new int[lengthArray];
		return array;
	}

	int* initializeArray(int* array, int lengthArray) {

		for (int i = 0; i < lengthArray; i++) {
			std::cin >> array[i];
		}
		return array;
	}

	void printArray(int* array, int length) {

		for (int i = 0; i < length; i++) {
			std::cout << array[i] << ", ";
		}
		std::cout << std::endl;
	}

	int* toIntersectArrays(int& lengthThirdArray) {

		int* tempArray;
		tempArray = dynamicArray(lengthFirstArray);
		int counterForTempArray = 0;
		for (int i = 0; i < lengthFirstArray; i++) {
			int j;
			for (j = 0; j < i; j++) {
				if (firstArray[i] == firstArray[j])
					break;
			}
			if (j == i)
				tempArray[counterForTempArray++] = firstArray[i];
		}
		for (int i = 0; i < counterForTempArray; i++) {
			bool isNumberFound = false;
			for (int j = 0; j < lengthSecondArray; j++) {
				if (tempArray[i] == secondArray[j]) {
					isNumberFound = true;
				}
			}
			if (isNumberFound) {
				thirdArray[lengthThirdArray++] = tempArray[i];
			}
		}
		delete[] tempArray;
		return thirdArray;
	}
};

int main() {
	int lengthFirst, lengthSecond, lengthThird, *array;

	std::cin >> lengthFirst >> lengthSecond;

	Intersection ObjectOne(lengthFirst, lengthSecond);

	array = ObjectOne.getThirdArray();
	lengthThird = ObjectOne.getSizeOfThirdArray();

	std::cout << std::endl;
	for (int i = 0; i < lengthThird; i++)
		std::cout << array[i] << ", ";

	return 0;
}