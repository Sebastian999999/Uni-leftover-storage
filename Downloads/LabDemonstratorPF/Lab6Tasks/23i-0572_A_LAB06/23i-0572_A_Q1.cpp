#include<iostream>
using namespace std;
int main(){
//Muhammad Arslan 23i-0572_A
cout<<"Menu"<<endl;
cout<<"------------------------------"<<endl;
cout<<"+ Addition"<<endl;
cout<<"- Subtraction"<<endl;
cout<<"* Multiplication"<<endl;
cout<<"/ Division"<<endl;
cout<<"% Modulus"<<endl;
cout<<". Cancel"<<endl;
cout<<"------------------------------"<<endl;

char choice;
int a;
int b;
cout<<"Enter choice:\n";
cin>>choice;
cout<<"Enter the two numbers:\n";
cin>>a>>b;


switch (static_cast<int>(choice)) {
case '+': 
cout<<"Addition= "<<a+b<<endl;
break;

case '-':
cout<<"Subtraction= "<<a-b<<endl;
break;

case '*':
cout<<"Multiplication= "<<a*b<<endl;
break;

case '/':
switch (b) {
case 0:
cout<<"Division by zero is not possible"<<endl;
return 0;
}
cout<<"Division= "<<(a*1.0)/(b*1.0)<<endl;
break;

case '%':
cout<<"Modulus= "<<a%b<<endl;
break;

case '.':
break;

default:
cout<<"Invalid Operand entered!"<<endl;
}

return 0;
}


