#include <iostream>
#include <time.h>

using namespace std;

void checkBirthday(int monthArr[], int dayArr[], int yearArr[]) {
	// Create variable
	int month = 8;
	int day = 22;
	int year = 2001;

	// Check 
	for (int i = 0; i < 10; i++) {
		if (monthArr[i] == month && dayArr[i] == day && yearArr[i] == year)
			cout << "You are lucky" << endl;
		else
			cout << "Try again!" << endl;
	}
}

void createDate() {
	// Create array
	int month[10];
	int day[10];
	int year[10];

	// Push random numbers in array
	for (int i = 0; i < 10; i++) {
		month[i] = rand() % 31 + 1;
		day[i] = rand() % 13 + 1;
		year[i] = rand() % 5 + 1999;
	}

	// Display array
	// --------------------------
	for (int i = 0; i < 10; i++)
		cout << month[i] << "\t";

	cout << endl;

	for (int i = 0; i < 10; i++) 
		cout << day[i] << "\t";

	cout << endl;

	for (int i = 0; i < 10; i++)
		cout << year[i] << "\t";

	cout << endl;
	// --------------------------

	checkBirthday(month, day, year);
}



void main() {
	srand(time(0));
	createDate();
}