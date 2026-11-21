#include <iostream>
using namespace std;
int main()
{
char arr[]="Zain Ul Arifeen Sukhera";
int count=0;
	for(int i=0; i<25;i++)
	{
	cout<<arr[i];
	}
	cout<<endl;
	for(int i=0; i<25;i++)
	{
		if(arr[i]=='a'||arr[i]=='A')
		{
		count++;
		}
	}
cout<<"The number of times a has appeared is: "<<count<<endl;

return 0;

}
