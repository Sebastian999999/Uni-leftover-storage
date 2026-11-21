#include<iostream>
using namespace std;
int main()
{
	int row,col;
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
    int transpose[row][col];


	cout << "Original Matrix: " << endl;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
    
	for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            transpose[j][i]=arr[i][j];
        }

    }

	cout<< "Transpose Matrix: " << endl;
		for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<transpose[i][j]<<" ";
		}
		cout<<endl;
	}
    
	

return 0;
}