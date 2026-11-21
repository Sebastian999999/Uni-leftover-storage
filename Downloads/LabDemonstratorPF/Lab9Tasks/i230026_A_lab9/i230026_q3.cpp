#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int originalArray[SIZE];
    int squaredArray[SIZE];
    int reversedArray[SIZE];

    // Taking 5 integer inputs from the user and storing their squares in the original array
    cout << "Enter 5 integers:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> originalArray[i];
        squaredArray[i] = originalArray[i] * originalArray[i];
    }

    // Copying the squared elements into the reversed array
    for (int i = 0; i < SIZE; ++i) {
        reversedArray[i] = squaredArray[SIZE - i - 1];
    }

    // Displaying the original array and the reversed array
    cout << "\nOriginal array (squared elements): ";
    for (int i = 0; i < SIZE; ++i) {
        cout << squaredArray[i] << " ";
    }

    cout << "\nReversed array: ";
    for (int i = 0; i < SIZE; ++i) {
        cout << reversedArray[i] << " ";
    }
    cout << endl;

    return 0;
}

