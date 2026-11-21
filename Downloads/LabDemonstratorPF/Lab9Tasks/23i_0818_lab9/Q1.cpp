#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];
    
   
    cout << "Enter 5 integers between 1 and 9:\n";
    for(int i = 0; i < SIZE; ++i) {
        cout << "Enter integer " << i+1 << ": ";
        cin >> arr[i];

        while (arr[i] < 1 || arr[i] > 9) {
            cout << "Please enter an integer between 1 and 9: ";
            cin >> arr[i];
        }
    }
    
    
    int num;
    cout << "Enter a number to check if it's present in the array: ";
    cin >> num;
    

    bool found = false;
    for(int i = 0; i < SIZE; ++i) {
        if(arr[i] == num) {
            found = true;
            break;
        }
    }

    if(found)
        cout << num << " is present in the array.\n";
    else
        cout << num << " is not present in the array.\n";
    
    return 0;
}

