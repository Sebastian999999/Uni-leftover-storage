#include<iostream>
using namespace std;
int main(){
char a[20];
cout<<"enter a sentence";
cin.get(a,19);
int count=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0;
for(int i=0;i<20;i++){
if(a[i]>=65 && a[i]<=90){
count++;
}
if(a[i]>=97 && a[i]<=122){
count1++;
}
if(a[i]==97 || a[i]==65){
count2++;
}
if(a[i]==69 || a[i]==101){
count3++;
}
if(a[i]==73 || a[i]==105){
count4++;
}
if(a[i]==79 || a[i]==111){
count5++;
}
if(a[i]==85 || a[i]==117){
count6++;
}
}
cout<<"the number of capital letters are "<<count<<endl;
cout<<"the number of small letters are "<<count1<<endl;
cout<<"the number of vowel a letters are "<<count2<<endl;
cout<<"the number of vowel e letters are "<<count3<<endl;
cout<<"the number of vowel i letters are "<<count4<<endl;
cout<<"the number of vowel o letters are "<<count5<<endl;
cout<<"the number of vowel u letters are "<<count6<<endl;

return 0;
}
