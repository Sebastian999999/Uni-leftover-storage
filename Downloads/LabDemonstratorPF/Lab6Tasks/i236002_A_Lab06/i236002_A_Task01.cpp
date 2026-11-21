#include <iostream>
using namespace std;


int main()
{

int num1,num2;
char choice;

cout<<"+ Addtion"<<endl;
cout<<"- Subtraction"<<endl;
cout<<"* Multiplication"<<endl;
cout<<"/ Division"<<endl;
cout<<". Cancel"<<endl;


cout<<"Enter num1:"<<endl;
cin>>num1;
cout<<"Enter num2"<<endl;
cin>>num2;
cout<<"Enter Choice:"<<endl;
cin>>choice;





switch(choice)
{

case'+':
cout<<"num1+num2:"<<num1+num2;
break;
case'-':
cout<<"num1-num2:"<<num1-num2<<endl;
break;
case'*':
cout<<"num1*num2"<<num1*num2<<endl;
break;

case'/':
{
switch(num2)
{
case 0:
cout<<"INVALID NUM2"<<endl;
break;
default:
cout<<"num1/num2:"<<(float)num1/num2<<endl;
break;
}
}
break;

case'.':
cout<<"Cancel"<<endl;
break;
}
return 0;

}










