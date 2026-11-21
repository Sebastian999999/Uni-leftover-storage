#include<iostream>
using namespace std;
#include<iostream>
using namespace std;
int main()
{
	int row,col,sum=0;
    cout<<"Enter the number of rows:";
    cin>>row;
    cout<<"Enter the number of columns:";
    cin>>col;
   	int arr[row][col];
	cout<<"Enter the values for array:"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<"Enter the value for row "<<i+1<<" column "<<j+1<<":";
			cin>>arr[i][j];
		}
	}  
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(i%2!=0)
			{
				if(j%2!=0)
				{
					sum+=arr[i][j];
				}
			}
		}
	}  
	cout<<"The array is:"<<endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"The sum of numbers at odd col and row is :"<<sum<<endl;
	
	return 0;
}