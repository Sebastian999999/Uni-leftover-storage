#include <iostream>
//Zain Ul Arifeen Sukhera 23i-075- CS-A
using namespace std;
int main() 
{
//intialisation
float a ,b;
float ans;
char op; //operation

//Menu Display
cout<<"Calculator"<<endl;
cout<<"Menu"<<endl;
cout<<"-------------------------------"<<endl;
cout<<"+ Addition"<<endl;
cout<<"- Subtraction"<<endl;
cout<<"* Multiplication"<<endl;
cout<<"/ Division"<<endl;
cout<<". Cancel"<<endl;

cout<<"-------------------------------"<<endl;
cout<<"Enter 1st Number: ";
cin>>a;
cout<<"Enter 2nd Numbre: ";
cin>>b;
cout<<"Enter operation: ";
cin>>op;


//switch statement
	switch (op)
	{
		case '+':
		{
		ans=a+b;
		cout<<a<<' ' <<'+'<<b<<' '<<'='<<' '<<ans<<endl;
		return 0;
		}
		
		case '-':
		{
		ans=a-b;
		cout<<a<<' ' <<'-'<<b<<' '<<'='<<' '<<ans<<endl;
		return 0;
		}
		
		case '*':
		{
		ans=a*b;
		cout<<a<<' ' <<'*'<<b<<' '<<'='<<' '<<ans<<endl;
		return 0;
		}
		
		case '/':
		{
		ans=a/b;
		cout<<a<<' ' <<'/'<<b<<' '<<'='<<' '<<ans<<endl;
		return 0;
		}
		
		default:
		{
		cout<<"Invalid operation"<<endl; return 0;
		}
		
		case '.':
		{
		cout<<"Operation cancelled"<<endl;
		return 0;
		}
		
	}


return 0;
}

