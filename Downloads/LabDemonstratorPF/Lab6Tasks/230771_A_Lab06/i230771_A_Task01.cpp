
         //MUHAMMAD ANAS , 23i-0771
         //     SECTION A 
         //     LAB 06 Task 01

#include<iostream>
#include<iomanip>
using namespace std;
int main(){

int a,b;
char operation;
cout<<"  Menu"<<endl;
cout<<"  "<<setw(30)<<setfill('-')<<" "<<endl;
cout<<"  + Addition"<<endl;
cout<<"  - Subtraction"<<endl;
cout<<"  * Multiplication"<<endl;
cout<<"  . Cancel"<<endl;

cout<<endl<<"  "<<setw(30)<<setfill('-')<<" "<<endl;
cout<<"  Enter 1st number = ";
cin>>a;
cout<<"  Enter 2nd number = ";
cin>>b;
cout<<"  Enter operation = ";
cin>>operation;
cout<<"  "<<setw(30)<<setfill('-')<<" "<<endl;

switch(operation){
  case '+' : 
   cout<<"  "<<a<<" + "<<b<<" = "<<a+b<<endl;
   break;
  case '-' : 
   cout<<"  "<<a<<" - "<<b<<" = "<<a-b<<endl;
   break;
  case '*' : 
   cout<<"  "<<a<<" * "<<b<<" = "<<a*b<<endl;
   break;
  case '/' : 
   switch(b){
   case '0':
   cout<<"  Denominator cannot be zero."<<endl;
   break;
   default : 
   cout<<"  "<<a<<" / "<<b<<" = "<<a/b<<endl;
   break;
   }
  case '.' : 
   break;
  default : 
   cout<<"  Invalid operation has been input."<<endl;
}

return 0;
}
