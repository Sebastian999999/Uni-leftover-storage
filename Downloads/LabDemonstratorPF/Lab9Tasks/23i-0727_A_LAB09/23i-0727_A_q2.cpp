#include<iostream>
using namespace std;
int main()
{
int count = 0;
int size = 6;
char arr[] = {'S','A','L','E','H','A',};
cout<<"Name : ";
for(char val : arr)
{
cout<<" "<<val;
}
cout<<endl;
for(int i = 0 ; i<size ; i++)
{
if(arr[i] == 'A'){
	count++;
}
}
cout<<"The numnber of A's in the name are :  "<<count<<endl;
return 0;
}
