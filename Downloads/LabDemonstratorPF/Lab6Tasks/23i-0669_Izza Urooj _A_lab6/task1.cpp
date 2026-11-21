# include <iostream>
using namespace std;

int main ()
{

int n1,n2;
char ch;
cout<< "Menu : "<<endl;
cout<< "Addition + " <<endl;
cout<< "Subtraction - " <<endl;
cout<< "Multiplication *" <<endl;
cout<< "Division " <<endl;
cout<< "Remainder % " <<endl;
cout<<"Enter the two numbers "<<endl;
cin>>n1;
cin>>n2;
	
cout<<"Enter the Operator ( Enter period if you want to cancel )  ";
cin>>ch;
switch (ch)
{
case '+' :
cout<<"Addition"<<endl;
cout<<n1<<' '<<'+'<<' '<<n2<<"="<<' ' <<(n1+n2);
break;

case '-' :
cout<<"Subtraction"<<endl;
cout<<n1<<' '<<'-'<<' '<<n2<<"="<<' '<<(n1-n2);
break;
case '*':
cout<<"Multiplication"<<endl;
cout<<n1<<' '<<'*'<<' '<<n2<<"="<<' ' <<(n1*n2);
break;
case '/':
switch (n2==0){
case 1:
cout<<" divisor can't be zero";
break;
case 0:
cout<<"Division"<<endl;
cout<<n1<<' '<<'/'<<' '<<n2<<"="<<' ' <<(n1/n2);
break;}
break;

case '%':
cout <<"Remainder "<<endl;
cout<<n1<<' '<<'%'<<n2<<"="<<' '<<(n1%n2);
break;
case '.' :
cout<<"Canceled ";


}




















return 0 ;
}
