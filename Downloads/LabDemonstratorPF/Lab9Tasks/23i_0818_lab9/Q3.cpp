#include <iostream>
using namespace std;

int main() {
    const int SIZE = 5;
    int arr[SIZE];
    int squares[SIZE];
    int reversed[SIZE];
    
    cout << "Enter 5 integers:\n";
    for(int i = 0; i < SIZE; ++i) {
        cout << "Enter integer " << i+1 << ": ";
        cin >> arr[i];
        squares[i] = arr[i] * arr[i];
    }
    

    for(int i = 0; i < SIZE; ++i) {
        reversed[i] = squares[SIZE - 1 - i];
    }
    
    cout << "Original squares array:\n";
    for(int i = 0; i < SIZE; ++i) {
        cout << squares[i] << " ";
    }
    cout << endl;
    
    cout << "Reversed array:\n";
    for(int i = 0; i < SIZE; ++i) {
        cout << reversed[i] << " ";
    }
    cout << endl;
    
    return 0;
}

