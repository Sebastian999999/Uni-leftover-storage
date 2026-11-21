#include<iostream>
#include<cmath>
using namespace std;

int main()
{
const int size =5;
int arr[size];
int sum=0;

for(int i=0;i<size;i++)
{

cout<<"enter integar for "<<i+1<<" INDEX OF ARRAY   ";
cin>>arr[i];



}



for(int i=0;i<size;i++)
{
arr[i] = abs(arr[i]);  // i used absolute function here so that it deals with negative input as welllll
while (arr[i]>=10)
{
arr[i]/=10;

}

sum+=arr[i];


}

cout<<"SUM OF MOST SIGNIFICABT DIGITS ";

cout<<arr[0]<<"+"<<arr[1]<<"+"<<arr[2]<<"+"<<arr[3]<<"+"<<arr[4]<<"  IS  : "<<sum<<endl;































return 0;
}
