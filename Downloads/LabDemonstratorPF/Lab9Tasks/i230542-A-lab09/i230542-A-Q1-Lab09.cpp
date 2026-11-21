#include<iostream>
using namespace std;
int main(){
cout<<"enter 5 integers between 1-9:";
int a[5];
for(int i=0;i<5;i++){
cin>>a[i];
}
cout<<"enter another number to check its presence";
int b,count=0;
cin>>b;
for(int i=0;i<5;i++){
if(a[i]==b)
{
count++;
break;
}

}
if(count)
cout<<"the number is present in the array";
else
cout<<"the number is not present in the array";

return 0;
}
