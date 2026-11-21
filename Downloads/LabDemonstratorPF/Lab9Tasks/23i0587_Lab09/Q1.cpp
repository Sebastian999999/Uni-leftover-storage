#include<iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr[size];
    int num;
    bool isFound=false;

    cout<<"Enter 5 integers between (1-9): ";

    for(int i=0; i < size ; i++ )
    {
        cin >> arr[i];
    }

    /*Verifying input
    cout << "You entered: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;*/

    for(int i=0; i < size ; i++ )
    {
        if ( arr[i]<1 || arr[i]>9)
        {
            cout<<"Only numbers in the Range 1-9 are allowed."<< endl;

        }
        else 
        continue;
    }


    cout<< "Enter the number you want to check: ";
    cin>>num;


    for(int i=0; i < size ; i++ )
    {
        if (num==arr[i])
        {
            cout<<"The number you entered is present at the index " <<i<<"." <<endl; 
            isFound= true;
            break;
        }
        
    }

    if(!isFound)
    {
        cout<<"The number you entered NOT present in the array" <<endl;

    }






return 0;

}