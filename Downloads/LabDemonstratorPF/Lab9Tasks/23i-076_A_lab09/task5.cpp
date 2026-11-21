#include <iostream>

using namespace std;

int main() 
{
int size;

    int sum = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    int nums[size];
    
    cout << "Enter " << size << " elements of the array:\n";
    for (int i = 0; i < size; ++i) 
    {
        cout << "Element " << i + 1 << ": ";
        cin >> nums[i];
    } 
   

    for (int i = 0; i < size; ++i) 
    {
        int num = nums[i];
        
        while (num >= 10) 
        {
            num /= 10;
        }
       
        sum += num;
    }

   
    cout << "Sum  = " << sum << endl;

    return 0;
}
