#include <iostream>
using namespace std;
int main() 
{
    const int size=5; 
    int arr[size];
    cout<<"Enter "<<size<<" integers:"<< endl;
    for(int i=0; i<size; ++i) 
    {
     cout<<"Element "<<i+1<<": ";
     cin>>arr[i];
    }
    int largest=arr[0];
    int smallest=arr[0];
    
 for(int i=1; i<size; ++i) 
 {
  if(arr[i]>largest) 
  {
    largest=arr[i];
        }
  if(arr[i]<smallest)
   {
     smallest=arr[i];
        }
    }
 cout<<"Largest element: "<<largest<<endl;
 cout<<"Smallest element: "<<smallest<<endl;

    return 0;
}

