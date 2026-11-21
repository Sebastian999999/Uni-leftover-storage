#include <iostream>
using namespace std;
int main()
{
int n;
int arr[5];

cout<<"Enter five integers between 1 to 9:"<<endl;
for (int i=0; i<5; i++)
	{
	cin>>n;
	if (n>9 || n<1)
		{
		cout<<"Enter numbers between 1 and 9:"<<endl;
		cin>>n;
		}
	else
	arr[i] = n;
	}
	int num;
	cout<<"Enter a number:";
	cin>>num;
	bool present = false;
	for(int j=0; j<5; j++)
	{
	if(arr[j] = num)
	present = true;
	break;
	}
	if(present)
	{cout<<"Given number is present in the array."<<endl;}
	else
	{cout<<"Given number is not present in the array."<<endl;}
	
	

return 0;
}
