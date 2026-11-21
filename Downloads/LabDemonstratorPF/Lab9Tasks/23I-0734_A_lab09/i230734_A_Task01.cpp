#include <iostream>
using namespace std;
int main()
{
  int a[5]={1},n;
  bool flag=false;
  cout<<"Enter 5 values in array bw 1-9"<<endl;
  for( int i=0; i<5 ; i++)
   {
     cin>>a[i];
     while  (!(a[i]<=9 && a[i]>=1))
     {
      cout<<"Wrong input , enter value again"<<endl;
      cin>>a[i];
     }
   }
   cout<<"Enter a number to check if it is present in an array"<<endl;
   cin>>n;
   for(int i=0 ; i<5;i++)
   {
     if (a[i]==n)
     	{flag=true;
     	 break;}
   }
   if(flag)
   cout<<"Number found in array"<<endl;
   else
   cout<<"Number not found "<<endl;
   return 0;
  }
