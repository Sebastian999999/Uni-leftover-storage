#include<iostream>
using namespace std;
int main()
{

int size = 5;
int sq[size];
int arr1[size];

cout<<"Enter five numbers : ";
for(int i = 0 ; i<size ;i++)
{
cin>>arr1[i];
}
cout<<"The new array will be : ";
for(int i = 0 ; i<size ;i++)
{
sq[i] =arr1[i]*arr1[i];

}
for(int val : sq)
cout<<" "<<val;
cout<<endl;
cout<<"In reversed order : ";
for(int i = size-1 ;  i>=0 ; i--)
{
cout<<" "<<sq[i];
}
return 0;
}
