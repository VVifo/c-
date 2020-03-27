#include <iostream>
#include <time.h>

using namespace std;

/* Треба зробити одновимірний динамічний массив із випадковими значеннями
   та відсортувати його за спаданням */

int main()
{
	srand(time(0));
	int size = 10; // Розмір мвсиву
	int* arr = new int[size]; // Створення динамічного масиву

	// Заповнення масиву випадковими числами від 1 до розміру масива
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % size + 1;
	}

	// Виведення не відсортованого масиву
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	// Сортування масиву
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

	// Виведення відсортованого масиву
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	// Вивільнення пам'яті
	delete[] arr;
}