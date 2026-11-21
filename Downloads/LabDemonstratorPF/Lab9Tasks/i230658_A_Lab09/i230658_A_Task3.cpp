#include<iostream>
#include<cmath>
using namespace std;

int main() {
    const int size = 5;
    int arr1[size];
    int arr2[size];

    // Taking 5 integer inputs from the user 
    for(int i = 0; i < size; i++) 
    {
        cout << "Enter integer " << i + 1 << " of your array: ";
        cin >> arr1[i];
        arr1[i] = pow(arr1[i], 2); 
    }

    // reverse arr1
    for(int i = 0; i < size; i++) 
    {
        arr2[i] = arr1[size - 1 - i];
    }

    // Displaying elements of arr1
    cout << "Elements of arr1 with squares: ";
    for(int i = 0; i < size; i++) 
    {
        cout << arr1[i] << " ";
    }
    	cout << endl;

    // Displaying elements of arr2
    cout << "Elements of arr2 in reverse order: ";
    for(int i = 0; i < size; i++) 
    {
        cout << arr2[i] << " ";
    }
    	cout << endl;

    return 0;
}

