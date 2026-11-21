# include <iostream>
using namespace std;
int main ()
{
const int size=5;
int arr [size];

cout<<"enter five integers"<<endl;

for (int i =0;i<size;i++){
cin>>arr[i];
}

for (int i =0;i<size;i++){
arr[i]=arr[i]*arr[i];
}
int arr1[size];
for (int i =0;i<size;i++){
arr1[4-i]=arr[i];
}

for (int i =0;i<size;i++){
cout<<arr1[i]<<' ';
}




return 0 ;}
