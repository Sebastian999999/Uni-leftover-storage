#include<iostream>
using namespace std;
int main(){

float a,b;
char c;
cout<<"Hannan Abid         23i-0713               LAB06"<<endl<<endl;
cout<<"Enter 1st Number "<<endl;
cin>>a;
cout<<"Enter 2nd Number "<<endl;
cin>>b;
cout<<"Enter Operator "<<endl;
cin>>c;


switch(c){

	case '+':
		cout<<"Sum of "<<a<<" and "<<b<<"="<<a+b<<endl;
		break;
	case '-':
		cout<<"Difference of "<<a<<" and "<<b<<"="<<a-b<<endl;
		break;
	case '*':
		cout<<"Product of "<<a<<" and "<<b<<"="<<a*b<<endl;
		break;
	case '/':
	
		switch(b>0){
			case 1:
				cout<<"Division of "<<a<<" and "<<b<<"="<<a/b<<endl;
				break;
			case 0:
			cout<<"Math Error"<<endl;
			break;
			   }
			   
		break;
		
	case '%':
		cout<<"Modulus of "<<a<<" and "<<b<<"="<<(int)a%(int)b<<endl;
		break;
		
	default:
		cout<<"Invalid Operator"<<endl;

}

return 0;
}



