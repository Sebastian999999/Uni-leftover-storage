#include <iostream>
using namespace std;
//question 1
int main ()
{
int arr[5];
int n;
bool b=false;
cout<<"Enter 5 elements of an array"<<endl;

	//input loop
	for(int i=0; i<5; i++)
	{
	cin>>arr[i];
		if(arr[i]<1||arr[i]>9)
		{
		cout<<"Invalid input. rerun program"; 
		return 0;
		}
	}
	cout<<"\nEnter a number to find out wheather it is in the array"<<endl;
	cin>>n;
	
	//checking loop
	for(int i=0; i<5;i++)
	{
		if(arr[i]==n)
		{b=true;}
		else 
		{b=false;}	
	}

if(b==true){cout<<"The number "<<n<<" is present in the array entered"<<endl;}
else {cout<<"The number "<<n<<" is present in the array entered"<<endl;}
return 0;
}
