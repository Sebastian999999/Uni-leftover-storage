// Name: Saleh Mobashar, Roll No: 23i-0724, Section: A, Lab #9

#include <iostream>
using namespace std;

int main() {
    int numbers_array[5];
    
    cout << "Please enter 5 integers between 1 and 9:" << endl;
    for (int i = 0; i < 5; i++) {
        cin >> numbers_array[i];
        while (numbers_array[i] < 1 || numbers_array[i] > 9) {
            cout << "Please enter an integer between 1 and 9: ";
            cin >> numbers_array[i];
        }
    }
    
    // Asking user for another number to search
    int num;
    cout << "Enter a number to search in the array: ";
    cin >> num;
    
    // Checking if the number is present in the array
    bool flag = false;
    for (int i = 0; i < 5; ++i) {
        if (numbers_array[i] == num) {
            flag = true;
            break;
        }
    }
    
    if (flag) {
        cout << "The number is present in the array." << endl;
    } else {
        cout << "The number is not present in the array." << endl;
    }
    
    return 0;
}
