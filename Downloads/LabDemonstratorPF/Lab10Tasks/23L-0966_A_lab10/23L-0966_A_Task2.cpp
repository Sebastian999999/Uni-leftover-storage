#include<iostream>
using namespace std;
int main()
{
	int arr1[3][3],arr2[3][3],result[3][3];
	cout<<"Enter the value for first array:"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr1[i][j];
		}
	}
	cout<<"Enter the value for second array:"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>arr2[i][j];
		}
	}
	cout<<"First array:"<<endl;
	for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr1[i][j] << " ";
        }
        cout<<endl;
    }
    cout<<"Second array:"<<endl;
    	for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << arr2[i][j] << " ";
        }
        cout<<endl;
    }
	//calculating the resutant array
	for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int sum = 0;
            for (int k = 0; k < 3; ++k) {
                sum += arr1[i][k]*arr2[k][j];
            }
            result[i][j] = sum;
        }
    }
	 cout<<"Resultant array:"<<endl;
    	for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << result[i][j] << " ";
        }
        cout<<endl;
    }
	return 0;
}