#include<iostream>
using namespace std;
int main()
{
int  arr[5];
int x;

cout<<"Enter 5 integers from 1 to 9. "<<endl;

for(int i=0;i<5;i++)
{cin>>arr[i];

if(arr[i]<=9  && arr[i]>0)
continue;
else
{cout<<"Enter a valid no. "<<endl;
cin>>arr[i];}
}

cout<<"Enter a number . "<<endl;
cin>>x;

bool yes=false;

for(int i=0;i<5;i++)
{
if(arr[i]==x)
yes=true;
}

if(yes)
cout<<"The no exists in the array. "<<endl;
else
cout<<"The no doesnot existin the array. "<<endl;

return 0;
}
