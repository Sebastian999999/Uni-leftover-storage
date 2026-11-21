#include<iostream>
using namespace std;
int main(){
float a,b;
char ch;
cout<<"enter first number:";
cin>>a;
cout<<"enter first number:";
cin>>b;
cout<<"for operation enter the character (+,-,*,/) and enter . for cancelling"<<endl;
cout<<"enter the operation:";
cin>>ch;
switch(ch){
case '+':
cout<<a<<"+"<<b<<"="<<a+b;
break;
case '-':
cout<<a<<"-"<<b<<"="<<a-b;
break;
case '*':
cout<<a<<"*"<<b<<"="<<a*b;
break;
case '/':
(b==0)?(cout<<"math error"):(cout<<a<<"/"<<b<<"="<<a/b);
break;
case '.':
cout<<"the program is ancelled";
break;
default:
cout<<"invalid operation";
return 0;
}
}
