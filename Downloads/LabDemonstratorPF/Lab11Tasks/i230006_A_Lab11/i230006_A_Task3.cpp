#include<iostream>
using namespace std;

int divide(int a);
int divide(int a,int b);
int main(){
////////////MASAB TAHIR 23I-0006 A

int a,b;
cout<<"enter the value of a=";
cin>>a;
cout<<"enter the value of b=";
cin>>b;
cout<<"first function : (a/b=2)"<<divide(a)<<endl;
cout<<"second function : (a/b)="<<divide(a,b)<<endl;
return 0;
}

int divide(int a){
    cout<<"enter the value of b to divide"<<endl;
    int b;
    cin>>b;
    int x=a/b;
    return x;


}

int divide(int a,int b){
    int x=a/b;
return x;
}