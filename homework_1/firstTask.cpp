#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>

using namespace std;
int main() {
	// First Task
	int* x = new int;
	*x = 9;
	cout << "змінна х = " << *x << endl << endl;
	delete x;

	// Second Task
	srand(time(NULL));
	float* mas = new float[10];
	for (int i = 0; i < 10; i++)
		mas[i] = (rand() % 10 + 1) / float((rand() % 10 + 1));
	cout << "mas = " << endl;
	for (int i = 0; i < 10; i++)
		cout << setprecision(2) << mas[i] << endl;
	delete[] mas;
	cout << endl << endl;

	//Third Task
	srand(time(NULL));
	float** mas1 = new float* [2];
	for (int count = 0; count < 2; count++)
		mas1[count] = new float[5];
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 5; j++)
			mas1[i][j] = (rand() % 10 + 1) / float((rand() % 10 + 1));
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 5; j++)
			cout << '\t' << setprecision(2) << mas1[i][j] << '\t';
		cout << endl;
	}
	for (int count = 0; count < 2; count++)
		delete[] mas1[count];
	return 0;

}