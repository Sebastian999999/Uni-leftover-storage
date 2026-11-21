#include<iostream>
using namespace std;
int main()
{
int sq[5];
int s[5];
int ar2[5];
int ar[5];
for(int i=0;i<5;i++)
{
cin>>ar[i];

sq[i]=ar[i]*ar[i];
cout<<"The square of "<<ar[i]<<" is  " <<sq[i]<<endl;
}
cout<<"ORIGINAL ARRAY "<<endl;
for(int i=0;i<5;i++)
{
cout<<sq[i]<<" ";
}
cout<<endl<<"REversed array"<<endl;
for(int i=0;i<5;i++)
{
s[i]=sq[4-i];
}
for(int i=0;i<5;i++)
{
cout<<s[i]<<" ";
}
return 0;
}
