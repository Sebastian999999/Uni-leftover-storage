//Zibyah Ahmad
//23I-0734
//Q1-CS A
#include<iostream>
using namespace std;
int main()
{
   int no1,no2;
   char ch;
   cout<<"Enter first number"<<endl;
   cin>>no1;
   cout<<"Enter Second number"<<endl;
   cin>>no2;
   cout<<"Enter operation you want to perform (+,-,*,/,.,%)"<<endl;
   cin>>ch;
  switch(ch)
  {
    case '+': cout<<no1<<"+"<<no2<<"= "<<no1+no2<<endl;
              break;
    case '-': cout<<no1<<"-"<<no2<<"= "<<no1-no2<<endl;
              break;
    case '*': cout<<no1<<"*"<<no2<<"= "<<no1*no2<<endl;
              break;      
    case '.': cout<<"You Entered cancel"<<endl;
              break;   
    case '%': cout<<no1<<"%"<<no2<<"= "<<no1%no2<<endl;
              break;
    case '/': 
              switch(no2==0)
              {
                 case 1:cout<<"Division of Number not possible "<<endl;
                               break;
                        
                 case 0: cout<<no1<<"/"<<no2<<"= "<<no1/no2<<endl;
             		       break;
               }
               break;
    default: cout<<"Invalid Operator"<<endl;
   }
 return 0;
 }
