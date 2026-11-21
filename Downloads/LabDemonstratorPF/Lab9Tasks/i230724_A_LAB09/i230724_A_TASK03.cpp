// Name: Saleh Mobashar, Roll No: 23i-0724, Section: A, Lab #9

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int square_array[5];
    
    cout << "Please enter 5 integers (positive):" << endl;
    for (int i = 0; i < 5; i++) {
        int temp;
        cin >> temp;
        square_array[i]= pow(temp, 2);
    }
    
    int array2[5];

    for (int i = 0; i < 5; i++) {
      array2[i] = square_array[5 - i - 1];
    }

    cout << "Initial array:" << endl;
    for (int i = 0; i < 5; i++) {
      cout << square_array[i] << " ";
    }
    cout << endl;

    cout << "Copied array:" << endl;
    for (int i = 0; i < 5; i++) {
      cout << array2[i] << " ";
    }
    cout << endl;
    
    return 0;
}
