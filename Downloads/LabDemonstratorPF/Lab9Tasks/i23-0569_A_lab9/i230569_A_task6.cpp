#include <iostream>
using namespace std;

int main() 
{
const int size = 5;
int arr[size];

cout << "Enter " << size << " integers:" << endl;
    
    
    for(int i = 0; i < size; i++)
{
        cout << "Enter integer for index " << i + 1 << " of the array: ";
        cin >> arr[i];
}

   
int largest = arr[0];
int smallest = arr[0];
    for(int i = 1; i < size; i++)
{
		if(arr[i] > largest) 
	{
            largest = arr[i];
        }
        	if(arr[i] < smallest) 
        {
            smallest = arr[i];
        }
    }

    
    cout << "Largest element is : " << largest << endl;
    cout << "Smallest element is : "<< smallest << endl;

    return 0;
}

