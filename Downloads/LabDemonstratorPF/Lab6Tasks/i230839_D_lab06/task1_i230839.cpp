#include <iostream>
using namespace std;
int main()
{
	cout<<"    --------------------------------------         "<<endl;
	cout<<"        Inam ul Haq  23I-0839 CS-A        "<<endl;
	
	float a;
	int b;
	char exp;
		
		cout<<"  MENU  "<<endl;
		cout<<"  --------------------------------------------------"<<endl;
		cout<<"Addition + "<<endl;
		cout<<"Substraction - "<<endl;
		cout<<"Multiplication + "<<endl;
		cout<<"Division - "<<endl;
		cout<<"Cancel . "<<endl<<endl;
		
		
		
		
		cout<<"Enter First Number: ";
		cin>>a;
		
		cout<<"Enter 2nd Number: ";
		cin>>b;
		
	cout<<"Enter operation(+,-,*,/,.): ";
	cin>>exp;
	
		
		switch(exp){
			
			case '+':
			   cout<<a<<" + "<<b<<" = "<<a+b;
			   break;
			case '-':
			   cout<<a<<" - "<<b<<" = "<<a-b;
			   break;
			case '*':
			   cout<<a<<" * "<<b<<" = "<<a*b;
			   break;
			case '/':
				switch (b){
				case 0:
					cout<<"For Division, the denominator must not be zero";
			  		
			   		break;
			   	default:
			   		cout<<a<<" / "<<b<<" = "<<a/b;
			   	
			   		}
			   	break;
			   case '.':
			   	cout<<"Program Terminated";
			   	break;
				}
			
		
		
		
		cout<<endl<<"    --------------------------------------         "<<endl;
	
		return 0;
		}
				
		
