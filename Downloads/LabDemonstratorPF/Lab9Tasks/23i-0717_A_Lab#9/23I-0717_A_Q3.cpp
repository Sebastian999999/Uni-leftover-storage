#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
const int size=5;

int arr[size],revarr[size];

for(int i=0;i<5;i++){
 cout<<"Enter the no. "<<i+1<<" element"<<endl;
 cin>>arr[i];
arr[i]=pow(arr[i],2);	
}
	for(int i=0;i<size;i++)
	{
	
	revarr[i]=arr[size-i-1];
	
	}
	for(int i=0;i<size;i++){
	cout<<revarr[i]<<" ";
	
}
cout<<endl;
return 0;


}
