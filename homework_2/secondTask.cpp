#include <iostream>
#include <time.h>

using namespace std;

int getIndexOfEl(int arr[], int size, int n) {
	int res = -1;
	for (int i = 0; i < size; i++) {
		if (arr[i] == n) {
			res = i;
		}
	}
	return res;
}

int main() {
	srand(time(0));
	const int size = 10;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % size + 1;
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl << getIndexOfEl(arr, size, 5) << endl;
}