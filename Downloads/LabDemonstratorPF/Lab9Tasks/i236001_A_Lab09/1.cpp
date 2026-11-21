// Name:Irtaza Kazmi , Roll No.:23i-6001
#include<iostream>
using namespace std;
int main(){
int num,count=0;
const int size=5; 
int arr[size];
for(int i=0 ; i<5 ; i++){
cout<<"Enter a value to be assigned to array: ";
cin>>arr[i];
if(arr[i]>=10 || arr[i]<1)
{
cout<<"Invalid Input"<<endl;
return 0;
}
}
cout<<"Enter a Number to Check if it is in the Array: ";
cin>>num;
for(int i=0 ; i<5 ; i++){

if(num==arr[i]){
cout<<"Number is in the array"<<endl;
break;
}
count++;
 if(count==5)
cout<<"Number is not in the array"<<endl;
}


return 0;
}
