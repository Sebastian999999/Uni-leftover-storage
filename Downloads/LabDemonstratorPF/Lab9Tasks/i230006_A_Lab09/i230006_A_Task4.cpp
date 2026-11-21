#include<iostream>
#include<iomanip>
using namespace std;

int main(){

// MASAB TAHIR 23I-0006 A

int upper=0;
int lower=0;
int vowel=0;


char arr[20];
cout<<"enter a sentence:\n";
cin.get(arr,20);

for(int i=0;i<20;++i){
cout<<arr[i];
}

for(int i=0;i<19;++i){
if(arr[i]>=65 && arr[i]<=90)
upper++;
if(arr[i]>=97 && arr[i]<=122)
lower++;
if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u')
vowel++;
}



for(int i=1;i<20;++i){
if(arr[i-1]==' ' && i>=97 && i<=122)
arr[i]-=32;
}
cout<<endl<<arr;






cout<<"\ntotal upper case numbers are: "<<upper;
cout<<"\ntotal lower case numbers are: "<<lower;
cout<<"\ntotal vowel numbers are: "<<vowel;
return 0;

}
