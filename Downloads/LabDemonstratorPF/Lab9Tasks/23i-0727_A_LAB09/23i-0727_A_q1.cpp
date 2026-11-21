#include<iostream>
using namespace std;
int main()
{
int size = 5 , num;
int arr[size];
bool res = false;
bool res1 = true;
				
	cout<<"Enter 5 numbers: "<<endl;
	for(int i = 0 ; i<size ; i++)
	{
	cin>>arr[i];
	
	}
	for(int k = 0 ; k<size ; k++)
	{
	if(arr[k]>=1 && arr[k]<=9)
	{
	res1 = false;
	}
	}
	if(res1){
	cout<<" "<<endl;
	}
	else{
	cout<<"Enter a number between 1 and 9"<<endl;
	}
	
	if(res1){
	cout<<"Enter a single number : ";
	cin>>num;
	for(int j = 0; j<size ; j++)
	{
	if(num==arr[j])
	{
	res=true;
	}
	}
	if(res)
	{
	cout<<"the number is present in array"<<endl;
	}
	else{
	cout<<"the number is not present in array"<<endl;
	}
	}
	
	
	

return 0;
}
