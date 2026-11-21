#include<iostream>
using namespace std;

int main()
{
cout<<"Menu"<<endl
	<<"-------------------------\n"
	<<"+ Addition"<<endl<<"* Multiplication\n"<<"- Subtraction "<<endl<<"/ division\n";
	int num1,num2,temp;
	cout<<"Enter the number 1 : \n";
	cin>>num1;
	cout<<"Enter the number 2 : \n";
	cin>>num2;
	switch(num2==0)
	{
	case 1:
	cout<<"Invalid Number(Enter the number again):"<<endl;
	cin>>num2;
	default :
	cout<<"Is executing fine"<<endl;
	
	}
	
int operation;
cout<<"Ener the operation(1(+),2(*),3(/),4(-)) :\n";
cin>>operation;

switch(operation)
{
case 1:
temp=num1+num2;
cout<<"Addition :"<<temp;
break;

case 2:
temp=num1*num2;
cout<<"Multiplication :"<<temp;
break;

case 3:
temp=num1/num2;
cout<<"Division :"<<temp;
break;

case 4:
temp=num1-num2;
cout<<"Subtraction :"<<temp;
break;

default:
cout<<"Invalid operation :";

return 0;
}

}
