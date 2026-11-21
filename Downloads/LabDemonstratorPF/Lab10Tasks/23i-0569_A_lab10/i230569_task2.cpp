#include <iostream>
using namespace std;

const int SIZE = 3; 

int main() {
    int arr[SIZE][SIZE];
    int arr2[SIZE][SIZE];
    int result[SIZE][SIZE] = {0}; 

    cout << "TAKING INPUT FOR FIRST MATRIX" << endl;
    for (int i = 0; i < SIZE; i++) 
    {
        for (int j = 0; j < SIZE; j++)
         {
cout << "ENTER VALUE OF index " << i << " " << j << ": ";
cin >> arr[i][j];
        }
    }

    cout << "TAKING INPUT FOR SECOND MATRIX" << endl;
    for (int i = 0; i < SIZE; i++)
    
     {
        for (int j = 0; j < SIZE; j++) 
        {
            cout << "ENTER VALUE OF index " << i << " " << j << ": ";
            cin >> arr2[i][j];
        }
    }

 
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
         {
            for (int k = 0; k < SIZE; k++) 
            {
                result[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }

    
    cout << "RESULTANT MATRIX AFTER MULTIPLICATION:" << endl;
    for (int i = 0; i < SIZE; i++) 
    {
        for (int j = 0; j < SIZE; j++) 
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

