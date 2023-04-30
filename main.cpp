#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int* changeArraySize(int *oldArray, int oldArraySize, int newArraySize)
{

	int *newArray = new int[newArraySize];

	for (int i = 0; i < oldArraySize; i++){
	
		*(newArray + i) = *(oldArray + i);

	}

	if (newArraySize > oldArraySize){
	
		for (int i = oldArraySize; i < newArraySize; i++){
	
			*(newArray + i) = rand() % 10 + 1;
			
		}

	}

	return newArray;

}

int main()
{
	
	srand((unsigned)time(NULL));

	int *arraySize = new int;

	cout << "Enter the size of an array:";
	cin >> *arraySize;

	int *array = new int[*arraySize];
	
	for (int i = 0;i < *arraySize; i++){
	
		*(array + i) = rand() % 10 + 1;

	}

	cout << "Value of the array:" << '\n';

	for (int i = 0; i < *arraySize; i++){
	
		cout << *(array + i) << ' ';

	}

	cout << '\n';

	int* newArraySize = new int;
	cout << "Enter the value of resizing the array(Initial):";
	cin >> *newArraySize;

	array = changeArraySize(array, *arraySize, *newArraySize);

	delete arraySize;
	
	cout << "Value of the array after resizing(resized):" << '\n';

	for (int i = 0; i < *newArraySize; i++){
	
		cout << *(array + i) << ' ';

	}

	cout << '\n';

	return 0;

}
