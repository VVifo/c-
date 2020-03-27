#include <iostream>
#include <time.h>

using namespace std;

/* ����� ������� ����������� ��������� ������ �� ����������� ����������
   �� ����������� ���� �� ��������� */

int main()
{
	srand(time(0));
	int size = 10; // ����� ������
	int* arr = new int[size]; // ��������� ���������� ������

	// ���������� ������ ����������� ������� �� 1 �� ������ ������
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % size + 1;
	}

	// ��������� �� ������������� ������
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	cout << endl;

	// ���������� ������
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

	// ��������� ������������� ������
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	// ���������� ���'��
	delete[] arr;
}