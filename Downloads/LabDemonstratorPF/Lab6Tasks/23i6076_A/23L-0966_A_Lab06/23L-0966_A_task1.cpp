#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char ch;
	bool flag=true;
	cout<<"enter the two numbers:";
	cin>>a>>b;
	cout<<"Menu\n----------------------\n+ Addition\n- Subtraction\n* Multiplication\n/ Division\n- cancel"<<endl;
	cout<<"Enter the operation:"<<endl;
	cin>>ch;
	switch (ch)
	{
	case '+':
	cout<<"The sum of the two numbers is:"<<a+b<<endl;
	break;
	case '-':
	cout<<"The differnce of the two numbers is:"<<a-b<<endl;
	break;
	case '*':
	cout<<"The product of the two numbers is:"<<a*b<<endl;
	break;
	case '/':
	(b==0)?flag=false:flag=true;
	switch (flag)
	{
	case 0:
	cout<<"the divison of the two numbers is not possible!"<<endl;
	break;
	case 1:
	cout<<"the divison of the two numbers is "<<a/b<<endl;
	break;
	}
	break;
	case '.':
	break;
	default :
	cout<<"none of the operation"<<endl;
	}
	
	return 0;
}
