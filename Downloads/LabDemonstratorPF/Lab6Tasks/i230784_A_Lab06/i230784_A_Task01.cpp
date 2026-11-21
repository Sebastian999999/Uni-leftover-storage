/* Name: Madiha Shahzad
Roll Number: i23-0784
Section: A
Lab06
Task 1 */

#include <iostream>
using namespace std;
int main ()
{
  int num1,num2;
  char op;
  
  cout<<"Enter the first operand:";
  cin>>num1;
  cout<<"Enter the second operand:";
  cin>>num2;
  
  cout<<"\n------------------------"<<endl;
  cout<<"+ Sum"<<endl;
  cout<<"- Difference"<<endl;
  cout<<"* Product"<<endl;
  cout<<"/ Quotient"<<endl;
  cout<<"% Remainder"<<endl;
  cout<<". Cancel"<<endl;
  cout<<"------------------------"<<endl<<endl;
  
  cout<<"Enter the operation you want to perform:";
  cin>>op;
  
  switch(op)
  {
    case '+':
      cout<<"SUM="<<num1+num2<<endl; break;
      
    case '-':
      cout<<"DIFFERENCE="<<num1-num2<<endl; break;
      
    case '*':
      cout<<"PRODUCT="<<num1*num2<<endl; break;
    case '/':
    {
      switch(num2)
      {
         case '0':
           cout<<"Denominator is zero! Division can't be performed!"<<endl; break;
         default:
           cout<<"QUOTIENT="<<num1/num2<<endl; break;
    }
    }
    
    case '%':
      cout<<"REMAINDER="<<num1%num2<<endl; break;
      
    case '.':
      cout<<"Your program has been terminated!"<<endl;  break;
      
    default:
      cout<<"INVALID OPERATION!"<<endl;
 }
 cout<<endl;
return 0;
}      
