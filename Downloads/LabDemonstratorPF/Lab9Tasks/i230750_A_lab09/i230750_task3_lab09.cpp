#include <iostream>
using namespace std;
int main()
{
int n;
int srr[5];
int srr_r[5];

	for(int i=0; i<5; i++)
	{
		cout<<"Enter a number"<<endl;
		cin>>n;
		srr[i]=n*n;
	}
	cout<<'\n';
	for(int i=0, j=4; i<5,j>=0;i++,j--)
	{
	srr_r[j]=srr[i];
	}
	
	for(int i=0; i<5; i++)
	{
	cout<<srr_r[i]<<' ';
	}
	
return 0;
}
	
	
