//Aaiz Ur Rehman Kazmi 23I-0589
#include<iostream>
using namespace std;
int main()
{
	char ch;
	int a,b;
	cout<<"Menu\n-----------------\n + Addition\n -Subtraction\n *Multiplication\n / Division\n .Cancel\n";
	cout<<"------------------"<<endl;
	cout<<"Enter 1st number: ";
	cin>>a;
	cout<<"Enter 2nd number: ";
	cin>>b;
	cout<<"Enter operation: ";
	cin>>ch;
	switch(ch){
		case'+':
			cout<<a<<"+"<<b<<" = "<<a+b<<endl;
			break;
		case'-':
			cout<<a<<"-"<<b<<" = "<<a-b<<endl;
			break;
		case'*':
			cout<<a<<"*"<<b<<" = "<<(float)a*b<<endl;
			break;
		case'/':
			if(b==0){
				cout<<"Invalid Input"<<endl;
			}
			else{
			cout<<a<<"/"<<b<<" = "<<(float)a/b<<endl;
			}
			break;
		case'%':
			cout<<a<<"&"<<b<<" = "<<a%b<<endl;
			break;
		case'.':
			break;
		default:
			cout<<"Invalid operation "<<endl;					
	}	
	
	return 0;
}
