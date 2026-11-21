#include <iostream>

using namespace std;

int main() {
    const int SIZE = 5;
    int numbers[SIZE];

   
   
    cout << "Enter 5 integers between 1-9:" << endl;
    
    for (int i = 0; i < SIZE; ++i) {
    
        cout << "Enter number " << (i + 1) << ": ";
        
        cin >> numbers[i];
        
        
        while (numbers[i] < 1 || numbers[i] > 9) {
        
            cout << "Please enter a number between 1 and 9: ";
            
            cin >> numbers[i];
        }
    }

    
    int numToFind;
    
    cout << "Enter a number to check if it is present in the array: ";
    
    cin >> numToFind;

  
    bool found = false;
    
    for (int i = 0; i < SIZE; ++i) {
    
        if (numbers[i] == numToFind) {
        
            found = true;
            
            break;
        }
    }

   
    if (found) {
    
        cout << numToFind << " is present in the array." << endl;
        
    } else {
    
        cout << numToFind << " is not present in the array." << endl;
    }

    return 0;
}

