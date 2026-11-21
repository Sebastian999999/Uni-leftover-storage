#include <iostream>
using namespace std;

int main() 
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
 if (size<1) 
 {
    cout << " Invalid Input Please enter a valid size of array: ";
    cin >> size;
}
    int array[size];
    cout << "Enter " << size << " elements of the array:" << endl;
    for (int i = 0; i < size; ++i) 
    {
        cin >> array[i];
    }

    int large = array[0];
    int small = array[0];

    for (int i = 1; i < size; ++i) 
    {
        if (array[i] > large) 
        {
            large = array[i];
        }
        if (array[i] < small) 
        {
            small = array[i];
        }
    }

    cout << "Largest element: " << large << endl;
    cout << "Smallest element: " << small<< endl;

    return 0;
}

