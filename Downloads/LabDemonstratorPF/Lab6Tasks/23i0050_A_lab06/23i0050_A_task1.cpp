#include<iostream>
using namespace std;
int main()
{  int x,y;
  char n;
cout<<"\nEnter first number=";
cin>>x;
cout<<"\nEnter a second number=";
cin>>y;
 cout<<"\n1-Addition";
 cout<<"\n2-Subtraction";
 cout<<"\n3-Multiplication";
 cout<<"\n4-Division";
 cout<<"\n Enter a operation(+,-,/,*)=";
 cin>>n;
 switch(n)
 { case'+':
 cout<<x<<"+"<<y<<"="<<x+y;
 break;
 case'-':
 cout<<x<<"-"<<y<<"="<<x-y;
 break;
 case'*':
 cout<<x<<"*"<<y<<"="<<x*y;
 break;
 case'/':
  {switch(y)
 { case 0:
  cout<<"Invalid Input";
  break;
  default:
 cout<<x<<"/"<<y<<"="<<float(x)/y;
 break;
 }}
 break;
 case'.':
 cout<<"\n Invalid operation";
 break;
 }
 return 0;
 }
 
