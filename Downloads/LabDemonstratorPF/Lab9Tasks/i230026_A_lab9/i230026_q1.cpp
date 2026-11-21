#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];
    
    // Taking 5 integers input from the user
    cout << "Enter 5 integers between 1 and 9:\n";
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
        // Check if the entered number is between 1 and 9
        if (numbers[i] < 1 || numbers[i] > 9) {
            cout << "Please enter a number between 1 and 9." << endl;
            --i; // To ensure the user enters a valid number
        }
    }
    
    // Asking the user to enter a number to search
    int searchNumber;
    cout << "Enter a number to search: ";
    cin >> searchNumber;
    
    // Checking if the entered number is present in the array
    bool found = false;
    for (int i = 0; i < SIZE; ++i) {
        if (numbers[i] == searchNumber) {
            found = true;
            break;
        }
    }
    
    // Displaying the result
    if (found) {
        cout << searchNumber << " is present in the array." << endl;
    } else {
        cout << searchNumber << " is not present in the array." << endl;
    }
    
    return 0;
}

