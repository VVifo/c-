#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(0));
	int size = 5; // Розмір масиву
	float** arr = new float* [size]; // Створення масиву
	float middle = 0; // Змінна для зберігання середньго арефметичного

	for (int i = 0; i < size; i++) {
		arr[i] = new float[size];
	}

	// Заповнення масиву випадковими значеннями в проміжку [1;-1]
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			arr[i][j] = rand() % 3 - 1;
			middle += arr[i][j];
		}
	}

	middle /= size * 2; // Підрахунок середньго арефметичного

	// Виведення масиву
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// Заміна значень які менше -0.5 на середнє арефметичне
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr[i][j] < -0.5) {
				arr[i][j] = middle;
			}
		}
	}

	// Виведення результату программи
	cout << endl << "Arithmetic mean of all values of the array: " << middle << endl << endl;

	// Виведення масиву зі зміненими значеннями
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// Вивільнення пам'яті
	for (int i = 0; i < size; i++) {
		delete[] arr[i];
	}
}