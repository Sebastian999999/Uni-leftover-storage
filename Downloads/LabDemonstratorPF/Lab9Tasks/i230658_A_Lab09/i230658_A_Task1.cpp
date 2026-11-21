#include<iostream>
using namespace std;

int main() {
    
    const int size = 5;
    int arr1[size];
    int x;

    for(int i = 0; i < size; i++) 
    {
        cout << "Enter integer " << i + 1 << " of your array: ";
        cin >> arr1[i];
        
        	while(arr1[i] < 1 || arr1[i] > 9) 
        	{
            	cout << "Invalid input!!! Enter number again: ";
            	cin >> arr1[i];
        	}
    }


//--------------------------------------------------------------------------
    cout << "Enter a number to check whether it is present in array or not: ";
    cin >> x;

    bool present = false;
    for(int i = 0; i < size; i++) 
    {
        if(x == arr1[i]) 
        {
            present = true;
            break;
        }
    }

    if(present) 
    {
        cout << "The number is present\n";
    } 
    else 
    {
        cout << "The number is not present\n";
    }

    return 0;
}

