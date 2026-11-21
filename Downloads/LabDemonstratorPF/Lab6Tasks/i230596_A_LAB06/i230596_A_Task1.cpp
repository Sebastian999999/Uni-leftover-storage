#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"_______________________________________________________\nMENU\n_______________________________________________________\n(+) ADDITION\n(-)SUBTRACTION\n(*)MULTIPLICATION\n(/)DIVISION\n(.)CANCEL\n";
cout<<"_______________________________________________________\n";
cout<<"ENTER THE FIRST NUMBER :";
cin>>a;
cout<<"ENTER THE SECOND NUMBER :";
cin>>b;
cout<<"_______________________________________________________\n";
cout<<"select the operator : ";
char opr;
cin>>opr;
switch(opr)
{
case '+':
cout<<"RESULT :"<<a+b;
cout<<endl;
break;
case '-':
cout<<"RESULT :"<<a-b;
cout<<endl;
break;
case '*':
cout<<"_______________________________________________________\n";
cout<<"RESULT :"<<a*b;
cout<<endl;
break;
case '/':
      switch(b)
      {
      case 0:
      cout<<"DIVISION BY ZERO IS NOT POSSIBLE \n";
      return 0;
      }
cout<<static_cast<float>(a)/b;
cout<<endl;
break;
case '.':
cout<<"THANK YOU! THE PROGRAM HAS ENDED\n";
}

}
