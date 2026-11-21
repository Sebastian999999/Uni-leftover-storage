//Name:Irtaza Kazmi Roll No.:23i-6001
#include<iostream>
using namespace std;
int main()
{
int n1,n2;
char ch;
cout<<"Enter 1st Number : ";
cin>>n1;
cout<<"Enter 2nd Number : ";
cin>>n2;
cout<<"Enter a character : ";
cin>>ch;
switch(ch){
case '+':
cout<<"SUM : "<<n1+n2<<endl;
break;
case '-':
cout<<"Difference : "<<n1-n2<<endl;
break;
case '*':
cout<<"Product : "<<(float)n1*n2<<endl;
break;
case '/':
switch(n2==0)
	{
	case true:
	cout<<"Invalid Input"<<endl;
	break;
	case false:
	cout<<"Division : "<<(float)n1/n2<<endl;
	break;
	}
	break;
case '%':
cout<<"MOD : "<<n1%n2<<endl;
break;
default:
cout<<"Invalid Input ";
}
return 0;
}
