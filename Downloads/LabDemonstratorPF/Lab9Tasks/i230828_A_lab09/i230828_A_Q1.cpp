#include<iostream>
using namespace std;
int main(){

cout<<"This program will take 5 integers (between 1-9) and store them in array, then it will input a number and check if that number is present in an array"<<endl;
int arr[5] ;
int n ;



for (int i = 0 ; i<5 ; ++i)
{   cout<<"Enter element "<<i<<" of array: ";
    
    cin>> arr[i] ;
    if ( arr[i]>9 || arr[i]<1)
    {cout <<"Invalid Input!";
     --i;
     }
    cout<<endl;
    
    }
    
    
    cout<<"Enter the number which you want to check: ";
    cin>> n ;
    
    for (int j = 0 ; j<5 ; ++j)
    {  if( arr[j] == n)
       {cout<<"\nThis number is present in the array";
         break;
         }
    } 

return 0;

}
