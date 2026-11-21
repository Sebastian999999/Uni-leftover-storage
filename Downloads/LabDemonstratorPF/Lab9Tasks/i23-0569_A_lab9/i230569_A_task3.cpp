#include<iostream>
using namespace std;
int main()
{
const int size=5;
int arr[size];

int arr2[size];


int arr3[size];

int j=4;

for(int i=0;i<5;i++)
{


cout<<"Enter Integar no " <<i+1<<endl;
cin>>arr[i];



}

cout<<" ARRAY WITH SQUARED INTEGARS"<<endl;

for(int i=0;i<5;i++)
{


arr2[i]=arr[i]*arr[i];


cout<<"INTEGAR ON "<<i<<" INDEX OF ARRAY IS  ";
cout<<arr2[i];

cout<<endl;
}


cout<<"**********NOW THE ARRAY WITH REVERSED SQUARES***********"<<endl;

for(int i=0;i<5;i++)
{


arr3[i]=arr2[j];
j--;




cout<<"INTEGAR ON "<<i<<" INDEX OF ARRAY IS  ";
cout<<arr3[i];

cout<<endl;
}




























return 0;
}
