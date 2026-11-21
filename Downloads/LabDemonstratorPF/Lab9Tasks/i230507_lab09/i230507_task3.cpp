#include <iostream>
using namespace std;
int main()
{
int n, sq;
int arr[5];
int arr2[5];
cout<<"Enter 5 integers: ";
for(int i=0; i<5; i++)
	{
	cin>>n;
	sq = (n * n);
	arr[i] = sq;
	cout<<sq<<endl;
	for(int j=5; j>0; --j)
		{
		arr2[j] = arr[i];
		cout<<arr2[j]<<endl;
		}}
	

return 0;
}
