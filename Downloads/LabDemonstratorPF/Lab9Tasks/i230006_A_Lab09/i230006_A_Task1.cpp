#include<iostream>
#include<iomanip>
using namespace std;

int main(){

// MASAB TAHIR 23I-0006 A

bool flag=false;

int arr[5]={};


for(int i=0;i<5;++i){
cout<<"enter an integer for input in array: ";
cin>>arr[i];

if(arr[i]>9 || arr[i]<0 ){
cout<<"invalid....input again in range (0-9) :";
cin>>arr[i];
}


}

cout<<"elements in array are: ";
for(int i=0;i<5;++i){
cout<<arr[i]<<" ";

}
cout<<endl;

int b;
cout<<"enter integer for checking : ";
cin>>b;

for(int i=0;i<5;++i){

if(arr[i]==b)
flag=true;
}

if(flag==true)
cout<<"present in array";
else {
cout<<"not present in array";}






return 0;

}
