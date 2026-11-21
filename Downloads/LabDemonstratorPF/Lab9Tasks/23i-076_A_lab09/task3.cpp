#include <iostream>
using namespace std;

int main() 
{
    const int size = 5;
    int array[size];
    int S_array[size];
    int R_array[size];

    // Input from the user and taking it square
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) 
    {
        cin >> array[i];
        S_array[i] = array[i] * array[i];
    }

    // reverse the squared array
    for (int i = 0; i < size; ++i) 
    {
        R_array[i] = S_array[size - 1 - i];
    }

    // squared array
    cout << "Squared Array: "<<endl;
    for (int i = 0; i < size; ++i)
     {
        cout << S_array[i] << " ";
    }
    cout << endl;

    // reversed array
    cout << "Reversed Squared Array: "<<endl;
    for (int i = 0; i < size; ++i) 
    {
        cout << R_array[i] << " ";
    }
    cout << endl;

    return 0;
}

