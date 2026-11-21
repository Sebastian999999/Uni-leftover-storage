#include<iostream>
#include<cmath>
using namespace std;
int main()
{  int arr[5],arrA[5];
  for(int i=0;i<5;i++)
  {  cout<<"\nEnter a number=";
     cin>>arr[i];
   }
   for(int i=0;i<5;i++)
   {  arrA[i]=arr[i]*arr[i];
   } 
   cout<<"\nThe array having square=";
    for(int i=0;i<5;i++)
    { cout<<arrA[i]<<" ";
    }
   
   for(int i=4;i>=0;i--)
   { cout<<"\nReverse of array="<<arrA[i];
   }
   return 0;
   }
