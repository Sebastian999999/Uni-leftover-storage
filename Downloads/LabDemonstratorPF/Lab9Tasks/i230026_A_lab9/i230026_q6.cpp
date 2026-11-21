#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10; // Maximum size of the array
    int arr[SIZE];
    int n;

    // Asking the user for the size of the array
    cout << "Enter the number of elements (up to " << SIZE << "): ";
    cin >> n;

    // Checking if the entered size is within bounds
    if (n <= 0 || n > SIZE) {
        cout << "Invalid size. Please enter a number between 1 and " << SIZE << "." << endl;
        return 1; // Return with error code 1
    }

    // Asking the user to enter the elements of the array
    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Finding the largest and smallest elements
    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    // Displaying the largest and smallest elements
    cout << "Largest element: " << largest << endl;
    cout << "Smallest element: " << smallest << endl;

    return 0;
}

