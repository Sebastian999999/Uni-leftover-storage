#include<iostream>
using namespace std;

int main(){
float a,b;
cout<<"Enter first number: ";
cin>>a;
cout<<"Enter second number: ";
cin>>b;

char c;
cout<<"Enter operation: ";
cin>>c;

switch(c){
case '+':
	cout<<a+b;
	break;
case '-':
	cout<<a-b;
	break;
case '*':
	cout<<a*b;
	break;
case '/':
	cout<<a/b;
	break;
case '%':
	cout<<(int)a%(int)b;
	break;
default:
	cout<<"Enter a valid operation";
}
cout<<endl;

return 0;
}
