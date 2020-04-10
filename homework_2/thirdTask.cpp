#include <iostream>
#include <time.h>
#include <list>

using namespace std;

// Function that checks numbers for primes
bool isPrime(int n) {
    if (n == 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function that display prime numbers in array
void getPrimeNums(int arr[], int size) {
    list<int> primeList; // Create list

    // Search prime numbers
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i]) == true) // Number check
            primeList.push_back(arr[i]); // Add prime number to list
    }

    // Display list
    cout << "\tARRAY AFTER CHEK" << endl;
    for (auto i = primeList.begin(); i != primeList.end(); i++)
        cout << *i << " ";
}

void main()
{
    srand(time(0));
    const int size = 100; // Size of array
    int arr[size]; // Create array

    // Push random numbers in array
    for (int i = 0; i < size; i++)
        arr[i] = rand() % size + 1;

    // Display array
    cout << "\tARRAY BEFORE CHEK" << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    cout << endl << endl;

    getPrimeNums(arr, size);
} 
