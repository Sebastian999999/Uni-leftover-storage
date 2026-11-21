#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int num1;
int num2;

char ch;
cout<<"Menu"<<endl<<setw(30)<<setfill('-')<<"-"<<endl;
cout<<"+ Addition"<<endl<<"- Subtraction"<<endl<<"* Multiplication"<<endl<<"/ Division"<<endl<<". Cancel"<<endl;
cout<<setw(30)<<setfill('-')<<"-"<<endl;
cout<<"Enter 1st number = ";
cin>>num1;
cout<<"Enter 2nd number = ";
cin>>num2;
cout<<"Enter operation = ";
cin>>ch;
cout<<setw(30)<<setfill('-')<<"-"<<endl;
switch(ch)
{
case '+':
cout<<num1;
cout<<ch;
cout<<num2;
cout<<"=";
cout<<num1+num2<<endl;
cout<<"Thank you";
break ;
case '-':
cout<<num1;
cout<<ch;
cout<<num2;
cout<<"=";
cout<<num1-num2<<endl;
cout<<"Thank you";
break ;
case '*' :
cout<<num1;
cout<<ch;
cout<<num2;
cout<<"=";
cout<<num1*num2<<endl;
cout<<"Thank you";
break;
case '/' :
cout<<num1;
cout<<ch;
cout<<num2;
cout<<"=";

cout<<num1/num2<<endl;
cout<<"Thank you";
break;
case '%' :
cout<<num1;
cout<<ch;
cout<<num2;
cout<<"=";
cout<<num1%num2<<endl;

cout<<"Thank you";
break ;
	
default :
cout<<"Error";
}

return 0;
}
