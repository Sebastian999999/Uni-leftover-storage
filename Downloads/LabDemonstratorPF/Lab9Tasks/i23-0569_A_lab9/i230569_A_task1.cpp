#include<iostream>
using namespace std;
int main()
{

const int size =5;
int arr[size];
int sum=0;


for(int i=0;i<5;i++)
{
cout<<"ENTER NUMBER IN "<<i<< " index of array "<<endl;
cin>>arr[i];
}



cout<<endl<<endl<<endl;
cout<<"NOW ENTER THE NUMBER WHICH U WANT TO FIND IN ARRAY"<<endl;
int find;
cin>>find;


for(int i=0;i<5;i++)
{
if (find==arr[i])
{
cout<<"YES THAT NUMBER IS PRESENT IN "<<i<<" INDEX OF ARRAY"<<endl;
sum++;
}
else;
}

if (sum==0)
{
cout<<"THAT NUMBER IS NOT PRESENT IN ARRAY"<<endl;

}





































return 0;
}
