#include<iostream>
using namespace std;
int main()
{
//Imama Sarwar 23i-3048
    float num1,num2;
    char ch;
  //taking inputs
    cout<<"enter operand 1: ";
    cin>>num1;
    cout<<"enter operand 2: ";
    cin>>num2;
    cout<<"which operation do u wanna perform?\n Do * for multiplication\n/ for division\n+ for addition\n- for subtraction\n"<<". for cancel \n";
    cin>>ch;
 //giving the desired output based on the operation they chose
    switch(ch)
    {
    case '*':
    cout<<"Result of multiplication is: "<<num1*num2<<endl;
    break;
    case '/':
    cout<<"Result of division is: "<<num1/num2<<endl;
    break;
    case '+':
    cout<<"Result of addition is: "<<num1+num2<<endl;
    break;
    case '-':
    cout<<"Result of subtraction is: "<<num1-num2<<endl;
    break;
    case '.':
    cout<<"Program ending"<<endl;
    return 0;
    default:
    cout<<"enter a valid operation";
    }
 }
