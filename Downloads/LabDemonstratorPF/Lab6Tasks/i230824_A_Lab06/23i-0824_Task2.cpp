#include <iostream>
using namespace std;
int main() 
{
 char operation;
 float num1, num2, result;
 cout<<"Enter first number: ";
 cin>>num1;
 
 cout<<"Enter second number: ";
 cin>>num2;

 cout<<"Enter operation (+, -, *, /, %): ";
 cin>>operation;

  switch(operation)
  {
    case '+':
    result=num1+num2;
            break;
    case '-':
    result=num1-num2;
            break;
    case '*':
    result=num1*num2;
            break;
    case '/':
    switch (num2!=0)
     {
    case true:
    result=num1/num2;
            break;
    default:
    cout<<"Error: Division by zero is not allowed."<<endl;
    return 0;
            }
            break;
    case '%':
    switch (num2 != 0) 
    {
     case true:
     result=static_cast<int>(num1)%static_cast<int>(num2);
                    break;
    default:
    cout<<"Error: Division by zero is not allowed."<<endl;
    return 0;
            }
            break;
    default:
   cout<<"Error: Invalid operation entered."<<endl;
            return 0;
    }

    cout<<"Result: "<<result<<endl;

    return 0;
}

