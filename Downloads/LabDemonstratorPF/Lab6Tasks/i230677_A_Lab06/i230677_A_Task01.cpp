#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
 char symbol=0;
 int num1=0;
 int num2=0;
 int add=0;
 int sub=0;
 int product=0;
 int div=0;
 int mod=0;
 cout<<"Menu";
 cout<<"\n"<<setw(30)<<setfill('-')<<"\n";
 cout<<"+"<<" "<<"Addition\n";
 cout<<"-"<<" "<<"Subtraction\n";
 cout<<"*"<<" "<<"MUltiplication\n";
 cout<<"/"<<" "<<"Division\n";
 cout<<"%"<<" "<<"Modulus\n";
 cout<<"."<<" "<<"Cancel\n";
 cout<<setw(30)<<setfill('-')<<"\n";
 cout<<"Enter first number:";
 cin>>num1;
 cout<<"Enter second number:";
 cin>>num2;
 cout<<"Enter the operation:";
 cin>>symbol;
 cout<<"\n"<<setw(30)<<setfill('-')<<"\n";
 switch (symbol) {
     case '+':
           add=num1+num2;
           cout<<num1<<symbol<<num2<<"=";
           cout<<add;
           break;
     case '-':
           sub=num1-num2;
           cout<<num1<<symbol<<num2<<"=";
           cout<<sub;
           break;
     case '*':
           product=num1*num2;
           cout<<num1<<symbol<<num2<<"=";
           cout<<product;
           break;
     case '/':
           switch (num2==0){
               case 1:
                   cout<<"Invalid operand";
                   break;
               case 0:
                   div=num1/num2;  
                   cout<<num1<<symbol<<num2<<"=";    
                   cout<<div;
                   break; 
           }        
           break;
     case '%':
           switch (num2==0){
               case 1:
                   cout<<"Invalid operand";
                   break;
               case 0:
                   mod=num1%num2;
                   cout<<num1<<symbol<<num2<<"=";
                   cout<<mod;       
                   break;
          }  
          break;         
     case '.':
           cout<<"Cancelled";   
           break;
     default:
     cout<<"Invalid operator";      
 }              
 return 0;
}

