#include <iostream>
#include <time.h>

using namespace std;

// You need to create a one-dimensional dynamic array with random values and sort it in descending order

int main()
{
	srand(time(0));
	int size = 10; // Array size
	int* arr = new int[size]; // Create a dynamic array

	// Fill the array with random numbers from 1 to the size of the array
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % size + 1;
	}

	// Output an unsorted array
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	// Sort array
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] < arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	cout << endl;

	// Output the sorted array
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	// Free up memory
	delete[] arr;
}
