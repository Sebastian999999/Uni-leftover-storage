#include <iostream>
using namespace std;

int main() {
    int rows, cols;

  
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int originalArray[rows][cols];
    int tArray[cols][rows]; 
   
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> originalArray[i][j];
        }
    }

   
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            tArray[i][j] = originalArray[j][i];
        }
    }

   
    cout << "\nOriginal Array:" << endl;
    for (int i = 0; i < rows; ++i)
     {
        for (int j = 0; j < cols; ++j)
         {
            cout << originalArray[i][j] << " ";
        }
        cout << endl;
    }

    
    cout << "\nTranspose Array:" << endl;
    for (int i = 0; i < cols; ++i) 
    {
        for (int j = 0; j < rows; ++j)
         {
            cout << tArray[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

