#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 int num=0;
 int square=0;
 int arr[5]={0};
 int arr_reverse[5]={0};
 cout<<"Enter a number:\n";
 for (int i=0;i<5;i++)
     {
      cin>>num;
      arr[i]=pow(num,2);   
     }
 cout<<"\nInitial array:";
     for (int i=0;i<5;i++)
     {
      if (i==4)
         cout<<arr[i];
      else
         cout<<arr[i]<<",";   
     } 
   int i=4;
   for (int j=0;j<5;j++) 
     {   
       while (i>=0)
        {
         arr_reverse[j]=arr[i];
         i--; 
         break;
        }
    }
   cout<<"\nReversed array:";
 for (int j=0;j<5;j++)
    {
       if (j==4)
          cout<<arr_reverse[j];
       else   
          cout<<arr_reverse[j]<<","; 
    } 
      
 return 0;
}
