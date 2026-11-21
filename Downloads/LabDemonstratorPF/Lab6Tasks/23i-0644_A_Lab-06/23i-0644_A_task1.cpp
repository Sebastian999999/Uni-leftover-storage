#include<iostream>
using namespace std;
int main()
{
char c;
int x,y;
cout<<"Menu"<<endl;
cout<<"------------------------------------------------"<<endl;
cout<<"+ Addition"<<endl<<"- Subtraction"<<endl<<"* Multiplication"<<endl<<"/ Division"<<endl<<". Cancel"<<endl;
cout<<"------------------------------------------------"<<endl;
cout<<"Enter first no. "<<endl;
cin>>x;
cout<<"Enter secod no. "<<endl;
cin>>y;
cout<<"Enter operation "<<endl;
cin>>c;
switch(c)
{
case '+':
cout<<"Sum is "<<x+y<<endl;
break;
case '-':
cout<<"subtraction is "<<x-y<<endl;
break;
case '*':
cout<<"Product is "<<x*y<<endl;
break;
case '/':
switch(y){
case 0:
cout<<"Invalid input "<<endl;
break;}
cout<<"Division is "<<x/y<<endl;

break;
case '.':
break;
}



return 0;
}
