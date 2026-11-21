
#include<iostream>
using namespace std;
int main()
{
int sum,pro,sub,num2;
float num1,div;
char op;
cout<<"Menu \n";
cout<<"-------------------------------------"<<endl;
cout<<"+ Addition "<<endl;
cout<<"- Subtraction "<<endl;
cout<<"* Multiplication "<<endl;
cout<<"/ Division "<<endl;
cout<<". Cancel "<<endl;
cout<<"-----------------------------------"<<endl;
cout<<"Enter 1st number = ";
cin>>num1;
cout<<"Enter 2nd number = ";
cin>>num2;
cout<<"Enter operation = ";
cin>>op;
switch (op){

	case '+':
		sum=num1 + num2;
		cout<<num1<<" + "<<num2<<" = "<<sum<<endl;
	break;
	case '-':
		sub=num1-num2;
		cout<<num1<<" - "<<num2<<" = "<<sub<<endl;
	break;
	case '*':
		pro=num1*num2;
		cout<<num1<<" * "<<num2<<" = "<<pro<<endl;
	break;
	case '/':
		switch(num2){
		case 0:
		cout<<"The denomirator is Zero therefore the operation can not be completed "<<endl;
		break;	
		default:
		div=num1/num2;
		cout<<num1<<" / "<<num2<<" = "<<div<<endl;
		}
	break;
	case '.':
		cout<<"Operation Cancelled "<<endl;
	break;
	default:
		cout<<"Wrong Choice of operator "<<endl;
}





return 0;
}
