#include<iostream>
using namespace std;
int main(){
	//Hamna Asif , 23i-0658 ;

	int op1,op2;
	char c;
	cout<<"Menu"<<endl<<"______________________________"<<endl;
	cout<<"+ Addition"<<endl;
	cout<<"- Subtraction"<<endl;
	cout<<"* Multiplication"<<endl;
	cout<<"/ Division"<<endl;
	cout<<". Cancel"<<endl;
	cout<<"______________________________"<<endl;
	cout<<"Enter 1st number = ";
	cin>>op1;
	cout<<"Enter 2nd number = ";
	cin>>op2;
	cout<<"Enter operation = ";
	cin>>c;
	
	switch(c){
	case('+'):
		cout<<"The sum of "<<op1<<" and " <<op2<<" is= "<<op1+op2<<endl;
					break;
	case('-'):
		cout<<"The difference of "<<op1<<" and " <<op2<<" is= "<<op1-op2<<endl;
					break;
	case('*'):
		
		switch(op2)
		{case 0:
		cout<<"The denominator is 0 "<<endl;
		default:		
		cout<<"The product of "<<op1<<" and " <<op2<<" is= "<<op1*op2<<endl;}
					break;
	case('/'):
		cout<<"The quotient of "<<op1<<" and " <<op2<<" is= "<<op1/op2<<endl;
					break;
	case('.'):
		cout<<"The user does not want to perform any operation"<<endl;
					break;
	default:
		cout<<"Invalid input"<<endl;
		}








return 0;
}
