#include<iostream>
using namespace std;
int main()
{

int num1 , num2 ;
char op , per;
cout<<"Menu : "<<endl;
cout<<"Addition +"<<endl;
cout<<"Subtraction -"<<endl;
cout<<"Mutiplication *"<<endl;
cout<<"Division /"<<endl;
cout<<"Remainder % "<<endl;
cout<<" . Cancel"<<endl;

cout<<"Enter first number : ";
cin>>num1;
cout<<"Enter second number : ";
cin>>num2;
cout<<"Enter operator: ";
cin>>op;


switch(op)
{

case '+':
cout<<"Addition :"<<num1 + num2<<endl;
break;
case '-':
cout<<"Subtraction :"<<num1 - num2<<endl;
case '*':
cout<<"Multiplition :"<<num1 * num2<<endl;
break;
case '/':
	switch(num2 == 0 )
	{
	case 1 :
		cout<<"Invalid input enter a different second number "<<endl;
		break;
	case 0:
	cout<<"Division :"<<num1 / num2<<endl;
	
	}
	break;
case '%':
cout<<"Remainder : "<<num1 % num2<<endl;
break;
case '.':
break;
default :
cout<<"Invalid operator "<<endl;
//break;
}
/*cout<<"Enter a perriod (.) if you want to exit the program : ";
cin>>per;
switch(per == '.')
{
case 1 :
break;
}*/
return 0;
}

