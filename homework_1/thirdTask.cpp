#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(0));
	int size = 5; // Array size
	float** arr = new float* [size]; // Create an array
	float middle = 0; // Variable for storing arithmetic mean

	for (int i = 0; i < size; i++) {
		arr[i] = new float[size];
	}

	// Fill in the array with random values in the interval [1; -1]
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			arr[i][j] = rand() % 3 - 1;
			middle += arr[i][j];
		}
	}

	middle /= size * 2; // Calculation of the arithmetic mean

	// Output array
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// Substitution of values less than -0.5 by the arithmetic mean
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr[i][j] < -0.5) {
				arr[i][j] = middle;
			}
		}
	}

	// Output the result of the program
	cout << endl << "Arithmetic mean of all values of the array: " << middle << endl << endl;

	// Output the array with the changed values
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// Free up memory
	for (int i = 0; i < size; i++) {
		delete[] arr[i];
	}
}
