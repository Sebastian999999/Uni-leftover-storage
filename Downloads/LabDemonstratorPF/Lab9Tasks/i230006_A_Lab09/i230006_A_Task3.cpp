#include<iostream>
#include<iomanip>
using namespace std;

int main(){

// MASAB TAHIR 23I-0006 A

int arr[5];
int arr2[5]={};
int input;
for(int i=0;i<5;++i){
cout<<"enter the integers:";
cin>>input;
input=input*input;
arr[i]=input;
}

cout<<"\narray in squared and simple form:\n";
for(int i=0;i<5;++i){ 
cout<<arr[i]<<" "; 
}
int j=0;

cout<<"\narray in reversed form:\n";
for(int i=4;i>=0;--i){

arr2[j]=arr[i];
j++;
}

for(int i=0;i<5;++i){
cout<<arr2[i]<<" ";
}


return 0;

}
