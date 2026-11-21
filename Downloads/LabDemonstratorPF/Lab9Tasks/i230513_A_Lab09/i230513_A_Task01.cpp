#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];
    
    
    cout << "Enter 5 numbers between 1 and 9: " << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Enter a number " << i+1 << ": ";
        cin >> numbers[i];
        
        
        while (numbers[i] < 1 || numbers[i] > 9) {
            cout << "Please enter a number between 1 and 9: ";
            cin >> numbers[i];
        }
    }
    
    
    int checkNumber;
    cout << "\nEnter a number to check if it's present in the array: ";
    cin >> checkNumber;
    
    
    bool found = false;
    for (int i = 0; i < SIZE; ++i) {
        if (numbers[i] == checkNumber) {
            found = true;
            break;
        }

   }
    
    
    if (found)
        cout << "The number " << checkNumber << " is present in the array." << endl;
    else
        cout << "The number " << checkNumber << " is not present in the array." << endl;
    
    return 0;
}


























































