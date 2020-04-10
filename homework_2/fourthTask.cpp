#include <iostream>
#include <time.h>

using namespace std;

// A function that draws a frame with the necessary parameters
void drawTable(int m, int n, int d) {
	string widthWithStars = ""; // Creating empty variable for draw stars
	string thicknessWithStars = ""; // Creating empty variable for draw thickness
	int countOfSpaces = m - (d * 2); // Counting necessary spaces
	string widthWithoutStars = ""; // Creating empty variable for draw spaces

	// This loop fills the string with the required number of stars
	for (int i = 0; i < n; i++)
		widthWithStars += "*";

	// This loop fills the line with the required frame thickness.
	for (int i = 0; i < d; i++)
		thicknessWithStars += "*";

	// Drawing top part of frame
	for (int i = 0; i < d; i++)
		cout << widthWithStars << endl;
	
	// I can't explain how it works, but this check is just needed
	// Otherwise program does not work correct
	// ---------------------------------------------------
	if (m == n) {
		for (int i = 0; i < countOfSpaces; i++)
			widthWithoutStars += " ";
	}
	else if (m != n) {
		for (int i = (m - n) + 1; i <= countOfSpaces; i++)
			widthWithoutStars += " ";
	}
	// ---------------------------------------------------

	// Drawing side frames and spaces between them
	for (int i = 0; i < countOfSpaces; i++)
		cout << thicknessWithStars << widthWithoutStars << thicknessWithStars << endl;

	// Drawing bottom part of frame
	for (int i = 0; i < d; i++)
		cout << widthWithStars << endl;
}

void main() {
	srand(time(0));
	// Testing program
	for (int i = 0; i < 100; i++)
	{
		drawTable(rand() % 20 + 8, rand() % 20 + 8, rand() % 3 + 1);
		cout << endl;
	}
}