#include<iostream>
using namespace std;
int main(){
cout<<"enter 5 integers: ";
int a[5];
for(int i=0;i<5;i++){
cin>>a[i];
}
int b[5];
for(int i=0;i<5;i++){
b[i]=(a[i]*a[i]);
}
for(int i=0;i<5;i++){
a[i]=b[4-i];

}
cout<<"updated array:";
for(int i=0;i<5;i++){
cout<<a[i]<<" ";
}

return 0;
}
