#include<iostream>
using namespace std;
int main()
{
int ar[5],arr[5];
int x,temp;
cout<<"Enter 5 numbers."<<endl;

for(int i=0;i<5;i++)
{
cin>>ar[i];
ar[i]=ar[i]*ar[i];
}

cout<<"The updated array is:  {";
for(int i=0;i<5;i++)
{
cout<<ar[i]<<" ";
}
cout<<"}";
cout<<endl;

for(int i=0;i<5;i++)
{
arr[i]=ar[4-i];
}

cout<<"Reversed array is: ";
for(int i=0;i<5;i++)
cout<<arr[i]<<" ";
cout<<"}";
cout<<endl;


return 0;
}
