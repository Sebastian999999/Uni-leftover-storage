// MUHAMMAD ANAS KHATTAK 
// 23i-0771
// CS-23A 

#include<iostream>
using namespace std;
int main(){
int size = 5;
int num;
int array1[size];
int array2[size];
for(int i=0; i<size ; i++){
cout<<"Enter an integer: ";
cin>>num;
array1[i]=num;
array1[i] = array1[i] * array1[i];
cout<<"Squared element of array1 is : "<<array1[i]<<endl;
}
cout<<"\n-----------------------------------\n \n";

for(int i=0 ; i<size ; i++){
 array2[i] = array1[size-1-i];
 cout<<"Element "<<i<<" of array2 is "<<array2[i]<<endl;
 }

return 0;
}
