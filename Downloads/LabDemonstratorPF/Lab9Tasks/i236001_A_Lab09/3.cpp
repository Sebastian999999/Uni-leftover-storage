// Name:Irtaza Kazmi , Roll No.:23i-6001
#include<iostream>
using namespace std;
int main(){
int n, i=0,j=4;
const int size=5;
int arr1[size],arr2[size];
for( ; i<5 ; i++){
cout<<"Enter a Number :";
cin>>n;
arr1[i]=n*n;
cout<<"Elements of 1st Array Become:"<<arr1[i]<<endl;
arr2[j]=arr1[i];
j--;
}
cout<<endl;
for(int j=0 ; j<5 ; j++){

cout<<"Elements of 2nd Array Become:"<<arr2[j]<<endl;
}
cout<<endl;

return 0;
}
