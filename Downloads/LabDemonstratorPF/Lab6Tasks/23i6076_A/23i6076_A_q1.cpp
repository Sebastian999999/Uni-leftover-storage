#include<iostream>
using namespace std;
int main()
{
int op1,op2;
char o;
cout<<"Enter first operand \n";
cin>>op1;
cout<<"Enter Secound operand \n";
cin>>op2;
cout<<"Enter operator \n";
cout<<"Menu"<<endl;
cout<<"-----------------------"<<endl;
cout<<"+ Addition"<<endl;
cout<<"- subtraction"<<endl;
cout<<"* Multiplication"<<endl;
cout<<"/ Division"<<endl;
cout<<". Cancel"<<endl;
cout<<"% Modulus"<<endl;
cin>>o;
switch(o)
{
case '+':
cout<<"Output: Result "<<op1+op2;
break;
case '-':
cout<<"Output: Result "<<op1-op2;
break;
case '*':
cout<<"Output: Result "<<op1*op2;
break;
case '/':
switch(op2)
case 0:
cout<<"MATHS ERROR"<<endl;
cout<<"invalid answer"<<endl;
break;
break;
case '.':
break;
case '%':
cout<<"Output: Result "<<op1%op2;
break;
default:
cout<<"invalid operator \n";
break;
}
return 0;
}
