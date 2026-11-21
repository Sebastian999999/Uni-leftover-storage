#include <iostream>
using namespace std;

int main() 
{
    int num[5];
    int search_num;
    cout<<"Please enter 5 integers between 1 and 9:"<<endl;
    for(int i=0; i<5; ++i)
     {
      do {
            cout<<"Enter number " << i+1 <<": ";
            cin>>num[i];
        } while(num[i]<1 || num[i]>9);
    }
    cout<<"Enter a number to search in the array: ";
    cin>>search_num;

    for(int i=0; i<5; ++i) 
    {
        if(num[i]==search_num)
     {
       cout<<search_num<<" is present in the array."<<endl;
            return 0; 
        }
    }
    cout<<search_num<<" is not present in the array."<<endl;
    
    return 0;
}

