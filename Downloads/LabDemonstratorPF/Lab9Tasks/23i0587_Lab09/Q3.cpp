#include<iostream>
using namespace std;

int main()
{
    const int size = 5;
    int arr1[size];
    int sqr[size];
    int temp[size];
    int reversed[size];

    cout<<"Enter an array of 5 numbers:";
    for(int i=0; i < size; i++)
    {
        cin>>arr1[i];
    }

    cout<< "This is the enetered array: ";

    for(int i=0; i < size; i++)
    {
        cout << arr1[i]<< " ";
    }
    cout<<endl;

    for(int i=0; i < size; i++)
    {
        sqr[i]= (arr1[i]*arr1[i]);
    }

    cout<< "This is the squared array: ";

    for(int i=0; i < size; i++)
    {
        cout<<sqr[i] << " ";
    }
    cout<< endl;

    for(int i = 0 , j = (size-1); i < size ; i++, j--)
    {
        reversed[j]=sqr[i]; 
    }

    cout<< "This is the enetered array: ";

    for(int i=0; i < size; i++)
    {
        cout << reversed[i]<< " ";
    }
    cout<<endl;
    
return 0;

}
