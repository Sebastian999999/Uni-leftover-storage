// MUHAMMAD ANAS KHATTAK 
// 23i-0771
// CS-23A 

#include<iostream>
using namespace std;
int main(){
int num;
int array[5];
bool temp = false;

for(int i=0; i<5 ; i++){
  cin>>array[i];
  }
cout<<"Enter a number : ";
cin>>num;
for(int i=0 ; i<5 ; i++){
if(num==array[i]){
  temp = true;
}
}
if(temp){
cout<<"The number is present in the array."<<endl;}
else
cout<<"The number is not present in the array."<<endl;


  return 0;
}  
