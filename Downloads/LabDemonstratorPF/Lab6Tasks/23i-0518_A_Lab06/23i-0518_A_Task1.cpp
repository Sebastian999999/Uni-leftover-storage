#include<iostream>
using namespace std;
int main()
{
char op;
int  n1, n2, result;
cout<<"MENU"<<endl<<"---------------------------------------"<<endl;
cout<<"+ Addition\n- Subtraction\n* Multiplication\n/ Division\n% Modulus"<<endl;
cout<<"---------------------------------------"<<endl;
cout<<"Enter first number: ";
cin>>n1;
cout<<"Enter second number: ";
cin>>n2;
cout<<"Enter operation (+, -, *, /, %): ";
cin>>op;
switch(op) 
{
	case '+':
		result = n1 + n2;
		cout<<"Result: "<<result;
		break;
        case '-':
        	result = n1 - n2;
        	cout<<"Result: "<<result;
        	break;
        case '*':
        	result = n1 * n2;
        	cout<<"Result: "<<result;
        	break;
        case '/':
        	switch(n2)
        	{
        		case '0':
        		{
        			cout<<"Invalid Input....Number 2 should not be equal to zero"<<endl;
        			break;
        		}
        		result = n1 / n2;
        		cout<<"Result: "<<(float)result;
        		
        		
        	}
                break;
        case '%':
        	result = (int)(n1) % (int)(n2);
        	cout<<"Result: "<<result;
                break;
        default:
        	cout<<"Invalid operation!!! Run the program Again!!!"<<endl;
        	return 1;
}
return 0;
}
