#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {12, 45, 2, 78, 33, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    
    int largest = arr[0];
    int smallest = arr[0];

   
    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

   
    cout << "Largest element: " << largest << endl;
    cout << "Smallest element: " << smallest << endl;

    return 0;
}

