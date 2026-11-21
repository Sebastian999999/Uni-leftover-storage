#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	int arr[5][5];
	for (int i = 0; i <5; ++i)
	 {
        for (int j = 0; j <5; ++j)
		{
            arr[i][j] = rand()%100+1; 
        }
     }
     cout<<"Original array in straight order:"<<endl;
     for (int i = 0; i <5; ++i)
	 {
        for (int j = 0; j <5; ++j)
		{
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
     }
     cout<<"Reverse order:"<<endl;
      for (int i=4; i>= 0;i--)
	   {
        for (int j=4; j>=0;j--)
		{
            cout << arr[i][j] << " ";
        }
        cout<<endl;
    }
     

	
	return 0;
}