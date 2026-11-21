#include<iostream>
using namespace std;
int main(){

int a , b;
char op;

cout<<"Arithmetic Calculator using Switch statement\n";
cout<<"\nMenu\n_____________________________";

cout<<"\n\n+ Addition\n- Subtraction\n* Multiplication\n/ Division\n. Cancel";

cout<<"\n_____________________________";

cout<<"\n\nPlease enter the first number: ";
cin>>a;

cout<<"\nPlease enter the second number (Note: In case of division operation the second operator must not be zero) : ";
cin>>b;

cout<<"\nPlease enter the operation you want to do on both the operands: ";
cin>>op;

cout<<"\n\n_____________________________\n\n";
switch (op){

case '+':
 cout<<"Number 1 + Number 2 = "<<a+b;
 break;

case '-':
 cout<<"Number 1 - Number 2 = "<<a-b;
 break;

case '*':


 cout<<"Number 1 * Number 2 = "<<a*b;
 break;

case '/':
 switch(b){
  
  case 0 :
   cout<<"Please enter any non-zero number for 2nd Number when  when doing division\n";
   break;
   }
   break;
 cout<<"Number 1 / Number 2 = "<<a/b;
 break;


case '%':
 cout<<"Number 1 % Number 2 = "<<a%b;
 break;

case '.':
 cout<<" ";
default:
 cout<<"Please enter a number corresponding to the above operations";
 break;
 
 }
 
 return 0;

}



 
 
