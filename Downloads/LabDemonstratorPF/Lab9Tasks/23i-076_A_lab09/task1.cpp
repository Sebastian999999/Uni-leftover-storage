#include <iostream>
using namespace std;

int main() 
{
    const int size = 5;
    int numbers[size];
    
    // Taking 5 input 
    cout << "Enter 5 number between 1 and 9: " << endl;
    for (int i = 0; i < size; ++i) 
    {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> numbers[i];
        
        // checking wehther number enter is in range our not
        if (numbers[i] < 1 || numbers[i] > 9) 
        {
            cout << " Invalid Input Please enter a number between 1 and 9: ";
            cin >> numbers[i];
        }
    }
    
    // inputting number to check wether it is present our not
    int num_f;
    cout << "Enter a number to find in the array: ";
    cin >> num_f;
    
    // Checking if the number is present in the array
    bool found = false;
    for (int i = 0; i < size; ++i) 
    {
        if (numbers[i] == num_f) 
        {
            found = true;
            break;
        }
    }
    
    // Outputting the result
    if (found) 
    {
        cout << num_f<< " is present in the array." << endl;
    } 
    else 
    {
        cout << num_f << " is not present in the array." << endl;
    }
    
    return 0;
}

