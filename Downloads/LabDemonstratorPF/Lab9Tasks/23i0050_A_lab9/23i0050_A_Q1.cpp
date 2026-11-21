#include<iostream>
using namespace std;
int main()
{ int arr[5],n;
bool flag=true;
   for(int i=0;i<5;i++)
   {
  cout<<"\nEnter a interger between(1-9)=";
  cin>>arr[i];
  }
  cout<<"Enter a number";
  cin>>n;
  for(int i=0;i<5;i++)
  {
  if(n==arr[i])
     {flag =false;
     break;}
   else
   {flag= true;
   }
   }
   {if(flag)
   cout<<"\nNumber is not present in array";
   else
   cout<<"\nNumber is present in array";
   }
  return 0;
}
