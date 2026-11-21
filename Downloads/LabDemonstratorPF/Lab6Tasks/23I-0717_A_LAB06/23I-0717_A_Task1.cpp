#include<iostream>
using namespace std;
int main()
{
int a,b;
char s;
cout<<"______________________\n+ Addition\n* Multiplication\n- Subtraction\n/ Diviison\n% Modulus\n .Cancel\n______________________"<<endl;
cout<<"Enter first number:"<<endl;
cin>>a;
cout<<"Enter second number:"<<endl;
cin>>b;
cout<<"Enter the operator:"<<endl;
cin>>s;

switch(s)
{

case'%':
cout<<"Modulus\n"<<a<<"%"<<b<<"="<<a%b<<endl;
break;
case'+':
cout<<"Addittion\n"<<a<<"+"<<b<<"="<<a+b<<endl;
break;
case'-':
cout<<"Subtraction\n"<<a<<"-"<<b<<"="<<a-b<<endl;
break;
case'*':
cout<<"Multiplication\n"<<a<<"*"<<b<<"="<<a*b<<endl;
break;

switch(b)
{
case 0:
cout<<"Number cannot be equal to zero"<<endl;
break;
}
case '/':
cout<<"Divison\n"<<a<<"/"<<b<<"="<<a/b<<endl;


case'.':
break;

}
return 0;
}
