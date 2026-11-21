#include <iostream>
using namespace std;
int main()
{

char var;
int x,y;
cout<< "MENU \n + Addition \n -subtraction \n * Multiplication \n / division \n . Cancel "<<endl;
cout<<"Enter First number: "<<endl;
cin>>x;
cout<<"Enter second number: "<<endl;

cin>>y;
cout<<"Enter operation = ";
cin>>var;


switch(var){

case '+':
cout<<"Result "<<x+y;
break;
case '-':
cout<<"Result "<<x-y<<endl;
break;
case '*':
cout<<"Result "<<x*y<<endl;
break;
case '/':
cout<<"Result "<<x/y<<endl;
break;
case '%':
cout<<"Result "<<x % y<<endl;
break;
case '.':

cout<<"Cancelled"<<endl;
break;
}













return 0;
}
