#include<iostream>
using namespace std;

int callbyvalue(int x){
cout<<"callbyvalue"<<endl; 
x=x*3;
cout<<"x=";
return x;
}
void callbyreference(int &x){
    cout<<"call by reference"<<endl;
x=x*3;
cout<<"x="<<x<<endl;

}

int main(){
////////////MASAB TAHIR 23I-0006 A

int x=0;
cout<<"enter the value of the two vaiables"<<endl;
cin>>x;

cout<<callbyvalue(x);
cout<<endl;
callbyreference(x);

return 0;
}
