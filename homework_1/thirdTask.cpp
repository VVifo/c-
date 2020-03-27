#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(0));
	int size = 5; // ����� ������
	float** arr = new float* [size]; // ��������� ������
	float middle = 0; // ����� ��� ��������� ��������� �������������

	for (int i = 0; i < size; i++) {
		arr[i] = new float[size];
	}

	// ���������� ������ ����������� ���������� � ������� [1;-1]
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			arr[i][j] = rand() % 3 - 1;
			middle += arr[i][j];
		}
	}

	middle /= size * 2; // ϳ�������� ��������� �������������

	// ��������� ������
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// ����� ������� �� ����� -0.5 �� ������ �����������
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (arr[i][j] < -0.5) {
				arr[i][j] = middle;
			}
		}
	}

	// ��������� ���������� ���������
	cout << endl << "Arithmetic mean of all values of the array: " << middle << endl << endl;

	// ��������� ������ � �������� ����������
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	// ���������� ���'��
	for (int i = 0; i < size; i++) {
		delete[] arr[i];
	}
}